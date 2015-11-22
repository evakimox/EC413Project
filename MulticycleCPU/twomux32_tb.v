`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:58:42 11/22/2015
// Design Name:   twomux32
// Module Name:   C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/twomux32_tb.v
// Project Name:  MulticycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: twomux32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module twomux32_tb;

	// Inputs
	reg [31:0] In0;
	reg [31:0] In1;
	reg Sel;

	// Outputs
	wire [31:0] Out;

	// Instantiate the Unit Under Test (UUT)
	twomux32 uut (
		.In0(In0), 
		.In1(In1), 
		.Sel(Sel), 
		.Out(Out)
	);

	initial begin
		// Initialize Inputs
		In0 = 0;
		In1 = 0;
		Sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
		Sel = 1;
		In0 = 32'hffffffff;
		In1 = 32'hAAAAAAAA;
      
		#100;
		Sel=0;
		// Add stimulus here

	end
      
endmodule

