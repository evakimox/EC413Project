`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:15:11 11/19/2015 
// Design Name: 
// Module Name:    fourmux32 
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
module fourmux32(In0,In1,In2,In3,Sel,Out);

input [31:0]In0,In1,In2,In3;
input [1:0]Sel;
output [31:0]Out;

case(Sel)
	2'b00: assign Out=In0;
	2'b01: assign Out=In1;
	2'b10: assign Out=In2;
	2'b11: assign Out=In3;
endcase

endmodule
