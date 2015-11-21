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
module Datapath(clk,PC);

input clk;
input [31:0]PC;

wire [31:0]Ins,Ins_pc,Ins_ALUout;
wire [5:0]OPcode;
wire [4:0]Rs,Rd,Rt;
wire [15:0]imm;

//Instruction fetch
IMem IF(PC,Ins_pc);
input SelectIns;    //control signal IorD
twomux32 selectinstruction(Ins_pc,Ins_ALUout,SelectIns,Ins);

//Instruction decoding
InstructionDecoder ID(1,clk,Ins,OPcode,Rs,Rt,Rd,imm);

//reading/Writing register files
wire [31:0]A,B,write_data;
input RegWrite;	//control signal RegWrite
input RegDst; 	//control signal ResDst
twomux5 selectwhichregistertowrite(Rt,Rd,RegDst,RegBeingWritten);
wire write_data_reg;
nbit_register_file RF(write_data_reg, A, B, Rs, Rt, RegbeingWritten, RegWrite, clk);

//Selecting which to input to ALU
input ALUSrcA;  //control signal ALUSrcA
input [1:0]ALUSrcB;   //control signal ALUSrcB
wire [31:0]ALU_A,ALU_B;
//choose ALU input port A
twomux32 selectALUinputA(PC,A,ALUSrcA,ALU_A);
//sign extemd
wire [31:0]IMM32;
assign IMM32[15:0]=imm;
assign IMM32[31:16]=(imm[15])?16'hFFFF:16'h0000;
//choose ALU input port B
threemux32 selectALUinputB(B,1,IMM32,ALUSrcB,ALU_B);
//ALUOperation
wire [31:0]ALUoutput;
wire [3:0]ALU_selection;
assign ALU_selection=OPcode[3:0];
wire BEQflag;
wire [31:0]ALUresult;
ALU ALU(ALU_A,ALU_B,ALUresult,ALU_selection,BEQflag);
//choosing next cycle pc source
wire [31:0]JMPaddress;
assign JMPaddress[15:0]=imm;
assign JMPaddress[31:16]=16'b0000;
wire [31:0]PCInput;
twomux32 pcsrc(ALUresult,JMPaddress,PCSrc,PCInput);

//Dmem
wire [15:0]address;
assign address=imm;
input MemWrite;   //control signal MemWrite

DMem MEM(WriteData_mem,   // Input data into the memory
            MemData,     // Output data from the memory
            address,     // Address of data to be read/written
            MemWrite,    // When high, causes write to take place on posedge
            Clk); 

input BEQ; //control signal BEQ
wire branch;				
twomux1 selectbranchcondition(BEQflag,~BEQflag,BEQ,branch);

endmodule
