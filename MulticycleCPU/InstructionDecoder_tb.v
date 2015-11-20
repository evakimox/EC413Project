`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:24:48 11/19/2015
// Design Name:   InstructionDecoder
// Module Name:   C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/InstructionDecoder_tb.v
// Project Name:  MulticycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionDecoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstructionDecoder_tb;

	// Inputs
	reg IRWrite;
	reg clk;
	reg [31:0] FullIns;

	// Outputs
	wire [5:0] OPcode;
	wire [4:0] Rs;
	wire [4:0] Rt;
	wire [4:0] Rd;
	wire [15:0] imm;

	// Instantiate the Unit Under Test (UUT)
	InstructionDecoder uut (
		.IRWrite(IRWrite), 
		.clk(clk), 
		.FullIns(FullIns), 
		.OPcode(OPcode), 
		.Rs(Rs), 
		.Rt(Rt), 
		.Rd(Rd), 
		.imm(imm)
	);
always #5 clk=~clk;
	initial begin
		// Initialize Inputs
		IRWrite = 1;
		clk = 0;
		FullIns = 0;

		// Wait 100 ns for global reset to finish
		#100;
      FullIns = 32'hffffffff;
		#100;
		FullIns = 32'hABCDEF12;
		#100;
		IRWrite=0;
		FullIns = 32'h11111111;
		// Add stimulus here

	end
      
endmodule

