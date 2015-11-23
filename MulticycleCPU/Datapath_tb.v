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
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b0		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

		#12;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

		#22;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

		#32;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

		#42;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

		#52;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

      #62;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

		#72;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	

		#82;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#92;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#102;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00 		;	
		
		#112;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#122;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#132;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#142;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b1			;
		PCSrc = 2'd01		;	
		
		#152;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b1			;
		PCSrc = 2'd01		;	
		
		#162;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#172;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b1	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#182;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b1	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#192;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd01		;	
		
		#202;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;	
		
		#212;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd01		;	
		
		#222;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd2	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;

		#232;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;
		
		#242;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;
		
		#252;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd00		;
		
		#262;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'd0	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'd2		;
		
		
		// Add stimulus here

	end
      
endmodule

