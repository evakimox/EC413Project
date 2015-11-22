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
module Datapath(clk, SelectIns , RegWrite , RegDst , ALUSrcA , ALUSrcB , MemWrite ,MemtoReg, BEQ, PCSrc);

input clk;
reg [31:0]PC;
reg [31:0]NextPC;
initial
	begin
		PC = 0;
		NextPC = 0;
	end

wire [31:0]Ins,Ins_pc,Ins_ALUout;
wire [5:0]OPcode;
wire [4:0]Rs,Rd,Rt;
wire [15:0]imm;
reg [31:0]ALUoutput;

//Instruction fetch
input SelectIns;    //control signal IorD
twomux32 selectinstruction(PC,ALUoutput,SelectIns,InsSrc);		//PC and AlUoutput are the addresses of the instruction in I-Mem
IMem IF(InsSrc,Ins);		//Actually fetch the instruction into wire Ins

//Instruction decoding
InstructionDecoder ID(1,clk,Ins,OPcode,Rs,Rt,Rd,imm);

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Instruction fetching and decoding done, Every type must go through

//reading/Writing register files
wire [31:0]A,B,write_data;
input RegWrite;	//control signal RegWrite
input RegDst; 	//control signal ResDst
twomux5 selectwhichregistertowrite(Rt,Rd,RegDst,RegBeingWritten);
reg write_data_reg;		//I think this is usually the ALUout
reg WriteData_mem;		//This one have only 1 possible source
nbit_register_file RF(write_data_reg, A, B, Rs, Rt, RegbeingWritten, RegWrite, clk);

//Selecting which to input to ALU
input ALUSrcA;  //control signal ALUSrcA
input [1:0]ALUSrcB;   //control signal ALUSrcB
wire [31:0]ALU_A,ALU_B;
//choose ALU input port A
twomux32 selectALUinputA(PC,A,ALUSrcA,ALU_A);
//sign extend
wire [31:0]IMM32;
assign IMM32[15:0]=imm;
assign IMM32[31:16]=(imm[15])?16'hFFFF:16'h0000;
//choose ALU input port B
threemux32 selectALUinputB(B,1,IMM32,ALUSrcB,ALU_B);

//ALUOperation
wire [3:0]ALU_selection;
assign ALU_selection=OPcode[3:0];
wire BEQflag;	//alu's output
wire [31:0]ALUresult;	//alu's output
ALU ALU(ALU_A,ALU_B,ALUresult,ALU_selection,BEQflag);


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//I think every arithmetic type done 

//choosing next cycle pc source
wire [31:0]JMPaddress;
assign JMPaddress[15:0]=imm;
assign JMPaddress[31:16]=16'b0000;
wire [31:0]PCInput;
wire IncrementPC;
assign IncrementPC=PC+1;
input [1:0]PCSrc;
threemux32 pcsrc(IncrementPC,ALUresult,JMPaddress,PCSrc,NextPC);

//Dmem
wire [15:0]address;
assign address=imm;
wire [31:0]MemData;
input MemWrite;   //control signal MemWrite

DMem MEM(WriteData_mem, MemData,address,MemWrite,clk); 

//Choosing branch
input BEQ; //control signal BEQ
wire branch;				
twomux1 selectbranchcondition(BEQflag,~BEQflag,BEQ,branch);

input MemtoReg;
//prepare every registers
always @(posedge clk)
begin 
ALUoutput <= ALUresult;
WriteData_mem <= B;
assign write_data_reg=(MemtoReg==0)?ALUresult:MemData;
PC <= NextPC;
end
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Done with the memory related and branch and jump type
endmodule
