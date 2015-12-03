`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:54:16 11/28/2015 
// Design Name: 
// Module Name:    CPU 
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
module CPU(clk,rst);

input clk,rst;
reg [31:0]PC;
reg [31:0]NextPC;
initial 
	begin
		PC = 32'h00000000;
	end
	
wire [31:0]Ins;
IMem instruction_sets(PC, Ins);

wire [5:0]OPcode;
assign OPcode = Ins[31:26];

wire PCWriteCond;
wire PCWrite;
wire IorD;
wire MemRead;
wire MemWrite;
wire MemtoReg;
wire IRWrite;
wire BEQ;
wire ALUSrcA;
wire [1:0]RegWrite;
wire [1:0]RegDst;
wire [1:0]PCSrc;
wire [3:0]ALUOP;
wire [2:0]ALUSrcB;


onestatecontroller ctrl(clk,rst,
					OPcode,
					PCWriteCond,
					PCWrite,
					IorD,
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
wire [31:0]ALUoutput;
Datapath DP(clk, IorD , RegWrite , RegDst , ALUSrcA , ALUSrcB , MemWrite ,MemtoReg, BEQ, PCSrc,ALUoutput,NextPC);

always @(posedge clk)
begin
PC=NextPC;
end

endmodule
