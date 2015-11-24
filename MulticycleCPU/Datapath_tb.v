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
		#102;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b0		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

		#112;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

		#122;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

		#132;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

		#142;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

		#152;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

      #162;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

		#172;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	

		#182;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#192;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#202;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00		;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00 		;	
		
		#212;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#222;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#232;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#242;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b1			;
		PCSrc = 2'b001		;	
		
		#252;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b1			;
		PCSrc = 2'b001		;	
		
		#262;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#272;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b1	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#282;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b1	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#292;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b001		;	
		
		#302;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;	
		
		#312;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b001		;	
		
		#322;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b10	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;

		#332;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;
		
		#342;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;
		
		#352;
		SelectIns = 1'b0	;
		RegWrite = 1'b1	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b00		;
		
		#362;
		SelectIns = 1'b0	;
		RegWrite = 1'b0	;
		RegDst = 1'b0		;
		ALUSrcA = 1'b1		;
		ALUSrcB = 2'b00	;
		MemWrite = 1'b0	;
		MemtoReg = 1'b0	;
		BEQ = 1'b0			;
		PCSrc = 2'b10		;
		
		
		// Add stimulus here

	end
      
endmodule

