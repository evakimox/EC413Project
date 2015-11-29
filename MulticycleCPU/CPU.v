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
module CPU(clk,rst,InstrIn,start,I_MEM_Write_Enable,MEM_Addr,ALUOut,PC_out);

input clk,rst,start;
input [31:0] InstrIn;
input [15:0] MEM_Addr;

output [31:0]ALUOut,PC_out;


endmodule
