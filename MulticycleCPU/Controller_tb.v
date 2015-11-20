`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:19:10 11/14/2015
// Design Name:   Controller
// Module Name:   C:/Users/Jingning Zhang/Desktop/EC413Project/MulticycleCPU/Controller_tb.v
// Project Name:  MulticycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Controller_tb;

	// Inputs
	reg clock;
	reg reset;
	reg [5:0] Instruction_ctrlIn;

	// Outputs
	wire PCWriteCond_ctrl;
	wire PCWrite_ctrl;
	wire IorD_ctrl;
	wire MemRead_ctrl;
	wire MemWrite_ctrl;
	wire MemtoReg_ctrl;
	wire IRWrite_ctrl;
	wire BEQ_ctrl;
	wire ALUSrcA_ctrl;
	wire RegWrite_ctrl;
	wire RegDst_ctrl;
	wire [1:0] PCSrc_ctrl;
	wire [1:0] ALUOP_ctrl;
	wire [1:0] ALUSrcB_ctrl;

	// Instantiate the Unit Under Test (UUT)
	Controller uut (
		.clock(clock), 
		.reset(reset), 
		.Instruction_ctrlIn(Instruction_ctrlIn), 
		.PCWriteCond_ctrl(PCWriteCond_ctrl), 
		.PCWrite_ctrl(PCWrite_ctrl), 
		.IorD_ctrl(IorD_ctrl), 
		.MemRead_ctrl(MemRead_ctrl), 
		.MemWrite_ctrl(MemWrite_ctrl), 
		.MemtoReg_ctrl(MemtoReg_ctrl), 
		.IRWrite_ctrl(IRWrite_ctrl), 
		.BEQ_ctrl(BEQ_ctrl), 
		.ALUSrcA_ctrl(ALUSrcA_ctrl), 
		.RegWrite_ctrl(RegWrite_ctrl), 
		.RegDst_ctrl(RegDst_ctrl), 
		.PCSrc_ctrl(PCSrc_ctrl), 
		.ALUOP_ctrl(ALUOP_ctrl), 
		.ALUSrcB_ctrl(ALUSrcB_ctrl)
	);
	always #5 clock=~clock;
	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;
		Instruction_ctrlIn = 0;
		// Wait 50 time units to reset
		#50 reset=0;

		// Wait 100 ns for global reset to finish
		#40
		Instruction_ctrlIn = 6'b010000;		
		#40
		Instruction_ctrlIn = 6'b010001;
		#40
		Instruction_ctrlIn = 6'b010010;
		#40
		Instruction_ctrlIn = 6'b010011;
		#40
		Instruction_ctrlIn = 6'b010100;
		#40
		Instruction_ctrlIn = 6'b010101;
		#40
		Instruction_ctrlIn = 6'b010111;
		#40
		Instruction_ctrlIn = 6'b000001;
		#30
		Instruction_ctrlIn = 6'b100000;
		#40
		Instruction_ctrlIn = 6'b100001;
		#40
		Instruction_ctrlIn = 6'b110010;
		#40
		Instruction_ctrlIn = 6'b110011;
		#40
		Instruction_ctrlIn = 6'b110100;
		#40
		Instruction_ctrlIn = 6'b110101;
		#40
		Instruction_ctrlIn = 6'b110111;
		#40
		Instruction_ctrlIn = 6'b111001;
		#30
		Instruction_ctrlIn = 6'b111011;
		#50
		Instruction_ctrlIn = 6'b111100;
		#40
		Instruction_ctrlIn = 6'b000000;
        
		// Add stimlus her

		// Cycle the instruction every 10 time units
		#10
		Instruction_ctrlIn = 6'b010000;	//R-type: MOV	
		#10
		Instruction_ctrlIn = 6'b010001;	//R-type: NOT
		#10
		Instruction_ctrlIn = 6'b010010;	//R-type: ADD
		#10
		Instruction_ctrlIn = 6'b010011;	//R-type: SUB
		#10
		Instruction_ctrlIn = 6'b010100;	//R-type: OR
		#10
		Instruction_ctrlIn = 6'b010101;	//R-type: AND
		#10
		Instruction_ctrlIn = 6'b010111;	//R-type: SLT
		#10
		Instruction_ctrlIn = 6'b000001;	//Jump
		#10
		Instruction_ctrlIn = 6'b100000;	//BEQ
		#10
		Instruction_ctrlIn = 6'b100001;	//BNE
		#10
		Instruction_ctrlIn = 6'b110010;	//I-type: ADDI
		#10
		Instruction_ctrlIn = 6'b110011;	//I-type: SUBI
		#10
		Instruction_ctrlIn = 6'b110100;	//I-type: ORI
		#10
		Instruction_ctrlIn = 6'b110101;	//I-type: ANDI
		#10
		Instruction_ctrlIn = 6'b110111;	//I-type: SLTI
		#10
		Instruction_ctrlIn = 6'b111001;	//I-type: LI
		#10
		Instruction_ctrlIn = 6'b111011;	//I-type: LWI
		#10
		Instruction_ctrlIn = 6'b111100;	//I-type: SWI
		#10
		Instruction_ctrlIn = 6'b000000;	//NOOP


	end
      
endmodule

