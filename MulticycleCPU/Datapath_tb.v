`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:55:42 11/22/2015
// Design Name:   Datapath
// Module Name:   C:/Users/Jingning Zhang/Documents/GitHub/EC413Project/MulticycleCPU/Datapath_tb.v
// Project Name:  MulticycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Datapath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Datapath_tb;

	// Inputs
	reg clk;
	reg SelectIns;
	reg RegWrite;
	reg RegDst;
	reg ALUSrcA;
	reg [1:0] ALUSrcB;
	reg MemWrite;
	reg MemtoReg;
	reg BEQ;
	reg [1:0] PCSrc;

	// Instantiate the Unit Under Test (UUT)
	Datapath uut (
		.clk(clk), 
		.SelectIns(SelectIns), 
		.RegWrite(RegWrite), 
		.RegDst(RegDst), 
		.ALUSrcA(ALUSrcA), 
		.ALUSrcB(ALUSrcB), 
		.MemWrite(MemWrite), 
		.MemtoReg(MemtoReg), 
		.BEQ(BEQ), 
		.PCSrc(PCSrc)
	);
always #5 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		SelectIns = 0;
		RegWrite = 0;
		RegDst = 0;
		ALUSrcA = 0;
		ALUSrcB = 0;
		MemWrite = 0;
		MemtoReg = 0;
		BEQ = 0;
		PCSrc = 0;

		// Wait 100 ns for global reset to finish
		#2;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

		#12;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

		#22;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

		#32;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

		#42;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

		#52;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

      #62;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

		#72;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	

		#82;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#92;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#102;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#112;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#122;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#132;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#142;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#152;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#162;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#172;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#182;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#192;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#202;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#212;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;	
		
		#222;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;

		#232;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;
		
		#242;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;
		
		#252;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;
		
		#262;
		SelectIns = 1'b	;
		RegWrite = 1'b		;
		RegDst = 1'b		;
		ALUSrcA = 1'b		;
		ALUSrcB = 2'd		;
		MemWrite = 1'b		;
		MemtoReg = 1'b		;
		BEQ = 1'b			;
		PCSrc = 2'd			;
		
		
		// Add stimulus here

	end
      
endmodule

