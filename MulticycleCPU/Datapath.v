`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:56 11/19/2015 
// Design Name: 
// Module Name:    Datapath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Datapath(clk,rst);

input clk,rst;
reg [31:0]PC;
wire[31:0]NextPC;
reg [31:0]ALUoutput;

always @(rst)
	begin
		PC = 32'h00000000;
		ALUoutput=32'h00000000;
	end

wire [31:0]Ins,InsSrc;
wire [5:0]OPcode;
wire [4:0]Rs,Rd,Rt;
wire [15:0]imm;

//Instruction fetch
wire SelectIns;    //control signal IorD
twomux32 selectinstruction(PC,ALUoutput,0,InsSrc);		//PC and AlUoutput are the addresses of the instruction in I-Mem
IMem IF(InsSrc,Ins);		//Actually fetch the instruction into wire Ins
wire MemtoReg;
wire MemWrite;   //control signal MemWrite
//Instruction decoding
InstructionDecoder ID(1,Ins,OPcode,Rs,Rt,Rd,imm);
wire [1:0]ALUSrcB;   //control signal ALUSrcB
wire [1:0]PCSrc;
wire RegWrite;	//control signal RegWrite
wire RegDst; 	//control signal ResDst
wire PCWritrCond;
wire BEQ; //control signal BEQ
wire ALUSrcA;  //control signal ALUSrcA
onestatecontroller ctrl(clk,rst,OPcode,
					PCWriteCond,
					PCWrite,
					SelectIns,
					MemRead,
					MemWrite,
					MemtoReg,
					IRWrite,
					BEQ,
					ALUSrcA,
					RegWrite,
					RegDst,
					PCSrc,
					ALUOP,
					ALUSrcB
					);

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Instruction fetching and decoding done, Every type must go through

//reading/Writing register files
wire [31:0]A,B;
wire [4:0]WriteRegAdd;
twomux5 choosse_write_reg(Rs,Rd,RegDst,WriteRegAdd);
reg [31:0]write_data_reg;		//I think this is usually the ALUout

// try
always @(ALUresult)
begin
assign write_data_reg=(MemtoReg==0)?ALUresult:MemData;
end

reg [31:0]WriteData_mem;		//This one have only 1 possible source
wire [4:0]Source2;
wire [4:0]Source1;
assign Source2 = (OPcode==6'b100000||OPcode==6'b100001||OPcode==6'b111001)?Rs:Rd;
assign Source1 = (OPcode==6'b111100)?Rs:Rt;
nbit_register_file RF(write_data_reg, A, B, Source1, Source2, WriteRegAdd, RegWrite, clk);

//Selecting which to input to ALU

wire [31:0]ALU_A,ALU_B;
//choose ALU input port A
twomux32 selectALUinputA(PC,A,ALUSrcA,ALU_A);
//sign extend
wire [31:0]IMM32;
wire [15:0]signext,zeroext;
assign IMM32[15:0]=imm;
assign signext=(imm[15])?16'hFFFF:16'h0000;
assign zeroext=16'h0000;
assign IMM32[31:16] = (OPcode[3:0]== 4'd0||OPcode[3:0]== 4'd1||OPcode[3:0]== 4'd2||OPcode[3:0]== 4'd3||OPcode[3:0]== 4'd7)?signext:zeroext;

//choose ALU input port B

threemux32 selectALUinputB(B,1,IMM32,ALUSrcB,ALU_B);

//ALUOperation
wire [3:0]ALU_selection;
assign ALU_selection=OPcode[3:0];
wire BranchEQ;	//alu's output
wire [31:0]ALUresult;	//alu's output
ALU ALU(ALU_A,ALU_B,ALUresult,ALU_selection,BranchEQ);


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//I think every arithmetic type done 

//choosing next cycle pc source
wire [31:0]JMPaddress;
assign JMPaddress[15:0]=imm;
assign JMPaddress[31:16]=16'b0000;
wire [31:0]IncrementPC;
assign IncrementPC = PC + 32'h00000001;


wire Branch_flag;
wire BranchType;
wire [31:0]BranchTarget;

assign BranchType = (OPcode==6'b100000)?(BranchEQ):(~BranchEQ);

assign Branch_flag = (OPcode==6'b100000||OPcode==6'b100001)?BranchType:0;
assign BranchTarget = (Branch_flag)?IMM32:IncrementPC;
threemux32 pcsrc(IncrementPC,BranchTarget,JMPaddress,PCSrc,NextPC);

//Dmem
wire [15:0]address;
assign address=imm;
wire [31:0]MemData;


DMem MEM(A, MemData,address,MemWrite,clk); 

//Choosing branch

//wire branch;				
//twomux1 selectbranchcondition(BranchEQ,~BranchEQ,BEQ,branch);

//prepare every registers
always @(ALUresult)
begin
ALUoutput <= ALUresult;
end 

always @(posedge clk)
begin 
//ALUoutput <= ALUresult;
//WriteData_mem <= B;
//assign write_data_reg=(MemtoReg==0)?ALUresult:MemData;
PC <= NextPC;
end
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Done with the memory related and branch and jump type
endmodule
