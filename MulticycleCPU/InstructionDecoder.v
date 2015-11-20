`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:50:21 11/19/2015 
// Design Name: 
// Module Name:    InstructionDecoder 
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
module InstructionDecoder(IRWrite,clk,
    FullIns,OPcode,Rs,Rt,Rd,imm);
	 input IRWrite;
	 input clk;
	 input [31:0]FullIns;
	 output reg [5:0]OPcode;
	 output reg [4:0]Rs,Rd,Rt;
	 output reg [15:0]imm;

always @ (posedge clk)
begin
	 assign OPcode = (IRWrite)?FullIns[31:26]:OPcode;
	 assign Rs = (IRWrite)?FullIns[25:21]:Rs;
	 assign Rt = (IRWrite)?FullIns[20:16]:Rt;
	 assign Rd = (IRWrite)?FullIns[15:11]:Rd;
	 assign imm = (IRWrite)?FullIns[15:0]:imm;
end

endmodule
