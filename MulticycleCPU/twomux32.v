`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:32 11/19/2015 
// Design Name: 
// Module Name:    twomux32 
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
module twomux32(In0,In1,Sel,Out);

input [31:0]In0,In1;
input Sel;
output [31:0]Out;

assign Out = (Sel==0)?In0:In1;

endmodule

