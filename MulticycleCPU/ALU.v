`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:58:09 11/19/2015 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    ALU_in_A,ALU_in_B,ALUoutput,ALU_selection,Beq_alu
	 );
	 
	 input [31:0]ALU_in_A,ALU_in_B;
	 input [3:0]ALU_selection;
	 output [31:0]ALUoutput;
	 output Beq_alu;
	 
	 
	 case(ALU_selection)
		4'b0000: assign ALUoutput = ALU_in_A;
		4'b0001: assign ALUoutput = ~ALU_in_A;
		4'b0010: assign ALUoutput = ALU_in_A + ALU_in_B;
		4'b0011: assign ALUoutput = ALU_in_A - ALU_in_B;
		4'b0100: assign ALUoutput = ALU_in_A | ALU_in_B;
		4'b0101: assign ALUoutput = ALU_in_A & ALU_in_B;
		4'b0111: assign ALUoutput = (ALU_in_A<ALU_in_B)?1:0;
		4'b1001: assign ALUoutput = ALU_in_B;	//B can be the immediate while A cannot
	endcase
	

endmodule
