`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:11:49 11/30/2015
// Design Name:   onestatecontroller
// Module Name:   C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/onestatectrl_tb.v
// Project Name:  MulticycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: onestatecontroller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module onestatectrl_tb;

	// Inputs
	reg clock;
	reg reset;
	reg [5:0] OPcode;

	// Outputs
	wire PCWriteCond;
	wire PCWrite;
	wire IorD;
	wire MemRead;
	wire MemWrite;
	wire MemtoReg;
	wire IRWrite;
	wire BEQ;
	wire ALUSrcA;
	wire RegWrite;
	wire RegDst;
	wire [1:0] PCSrc;
	wire [3:0] ALUOP;
	wire [1:0] ALUSrcB;

	// Instantiate the Unit Under Test (UUT)
	onestatecontroller uut (
		.clock(clock), 
		.reset(reset), 
		.OPcode(OPcode), 
		.PCWriteCond(PCWriteCond), 
		.PCWrite(PCWrite), 
		.IorD(IorD), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.MemtoReg(MemtoReg), 
		.IRWrite(IRWrite), 
		.BEQ(BEQ), 
		.ALUSrcA(ALUSrcA), 
		.RegWrite(RegWrite), 
		.RegDst(RegDst), 
		.PCSrc(PCSrc), 
		.ALUOP(ALUOP), 
		.ALUSrcB(ALUSrcB)
	);
always #5 clock=~clock;
	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;
		OPcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset =0;
		
		#120;
		OPcode = 6'd1;
		
		#120;
		OPcode = 6'd17;
		
		#120;
		OPcode = 6'd19;
		
		#120;
		OPcode = 6'd32;
		
		#120;
		OPcode = 6'd33;
		
		#120;
		OPcode = 6'd0;
		
        
		// Add stimulus here

	end
      
endmodule

