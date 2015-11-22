`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:49 11/19/2015 
// Design Name: 
// Module Name:    threemux32 
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
module threemux32(In0,In1,In2,Sel,Out);

input [31:0]In0,In1,In2;
input [1:0]Sel;
output reg[31:0]Out;

always @(In0,In1,In2,Sel)
begin
case(Sel)
	2'b00: assign Out=In0;
	2'b01: assign Out=In1;
	2'b10: assign Out=In2;
endcase
end

endmodule
