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
	 output reg [31:0]ALUoutput;
	 output reg Beq_alu;
	 
	 initial 
	 begin 
	 ALUoutput = 32'h0000;
	 end
	 
always @ (ALU_selection or ALU_in_A or ALU_in_B)
begin	 
	 case(ALU_selection)
		4'b0000: assign ALUoutput = ALU_in_A; //mov
		4'b0001: assign ALUoutput = ~ALU_in_A;	//not
		4'b0010: assign ALUoutput = ALU_in_A + ALU_in_B;//add
		4'b0011: assign ALUoutput = ALU_in_A - ALU_in_B;//sub
		4'b0100: assign ALUoutput = ALU_in_A | ALU_in_B;//or
		4'b0101: assign ALUoutput = ALU_in_A & ALU_in_B;//and
		4'b0111: assign ALUoutput = (ALU_in_A<ALU_in_B)?32'd1:32'd0;//slt
		4'b1001: assign ALUoutput = {16'h0000,ALU_in_B[15:0]};	//Li
		4'b1100: assign ALUoutput = ALU_in_B;//swi 
	endcase
	assign Beq_alu = (ALU_in_A==ALU_in_B)?1:0;
end

endmodule
