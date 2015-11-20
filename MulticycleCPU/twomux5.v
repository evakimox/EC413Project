`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:32 11/19/2015 
// Design Name: 
// Module Name:    twomux5 
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
module twomux5(In0,In1,Sel,Out);

input [4:0]In0,In1;
input Sel;
output [4:0]Out;

case(Sel)
	1'b0: assign Out=In0;
	1'b1: assign Out=In1;
endcase


endmodule
