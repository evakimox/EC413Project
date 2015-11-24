`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:11:38 11/23/2015
// Design Name:   threemux32
// Module Name:   C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/ThreeMux_32_tb.v
// Project Name:  MulticycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: threemux32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ThreeMux_32_tb;

	// Inputs
	reg [31:0] In0;
	reg [31:0] In1;
	reg [31:0] In2;
	reg [1:0] Sel;

	// Outputs
	wire [31:0] Out;

	// Instantiate the Unit Under Test (UUT)
	threemux32 uut (
		.In0(In0), 
		.In1(In1), 
		.In2(In2), 
		.Sel(Sel), 
		.Out(Out)
	);

	initial begin
		// Initialize Inputs
		In0 = 0;
		In1 = 0;
		In2 = 0;
		Sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
      In0 = 32'hAAAAAAAA;
		In1 = 32'hBBBBBBBB;
		In2 = 32'hCCCCCCCC;
		Sel = 2'd0;

		#100;
      In0 = 32'hAAAAAAAA;
		In1 = 32'hBBBBBBBB;
		In2 = 32'hCCCCCCCC;
		Sel = 2'd1;

		#100;
      In0 = 32'hAAAAAAAA;
		In1 = 32'hBBBBBBBB;
		In2 = 32'hCCCCCCCC;
		Sel = 2'd2;
		// Add stimulus here

	end
      
endmodule

