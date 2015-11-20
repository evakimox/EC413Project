`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:33 11/13/2015 
// Design Name: 
// Module Name:    Controller 
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
module Controller(clock,reset,Instruction_ctrlIn,
					PCWriteCond_ctrl,
					PCWrite_ctrl,
					IorD_ctrl,
					MemRead_ctrl,
					MemWrite_ctrl,
					MemtoReg_ctrl,
					IRWrite_ctrl,
					BEQ_ctrl,
					ALUSrcA_ctrl,
					RegWrite_ctrl,
					RegDst_ctrl,
					PCSrc_ctrl,
					ALUOP_ctrl,
					ALUSrcB_ctrl
					);
	input clock,reset;
	input [5:0]Instruction_ctrlIn;
	
	//Control line outputs				
	output PCWriteCond_ctrl;
	output PCWrite_ctrl;
	output IorD_ctrl;
	output MemRead_ctrl;
	output MemWrite_ctrl;
	output MemtoReg_ctrl;
	output IRWrite_ctrl;
	output BEQ_ctrl;
	output ALUSrcA_ctrl;
	output RegWrite_ctrl;
	output RegDst_ctrl;
	output [1:0]PCSrc_ctrl;
	output [1:0]ALUOP_ctrl;
	output [1:0]ALUSrcB_ctrl;
	
	reg PCWriteCond_ctrl;
	reg PCWrite_ctrl;
	reg IorD_ctrl;
	reg MemRead_ctrl;
	reg MemWrite_ctrl;
	reg MemtoReg_ctrl;
	reg IRWrite_ctrl;
	reg BEQ_ctrl;
	reg ALUSrcA_ctrl;
	reg RegWrite_ctrl;
	reg RegDst_ctrl;
	reg [1:0]PCSrc_ctrl;
	reg [1:0]ALUOP_ctrl;
	reg [1:0]ALUSrcB_ctrl;
	
	reg [3:0]state;
	reg [3:0]next_state;
	
	initial
	begin
		state = 4'd0;
		next_state = 4'd0;
	end
	
	
	//use If else statement to build output
	always @ (posedge clock)
	state <= next_state;
	
	always @(state)
	begin
		if(state==4'd0) begin	//Instruction Fetch
		//output assignments - initialize control lines
		PCWriteCond_ctrl=0;
		PCWrite_ctrl=1;
		IorD_ctrl=0;
		MemRead_ctrl=1;
		MemWrite_ctrl=0;
		MemtoReg_ctrl=0;
		IRWrite_ctrl=1;
		BEQ_ctrl=1;
		ALUSrcA_ctrl=0;
		RegWrite_ctrl=0;
		RegDst_ctrl=0;
		PCSrc_ctrl=2'b00;
		ALUOP_ctrl=2'b00;
		ALUSrcB_ctrl=2'b01;
		end
		//I think the follwing is just add whatever needed(new) and changed
		// - change only control lines that are needed
		if(state==4'd1) begin	//Instruction Decode/Register Fetch
		ALUSrcA_ctrl = 0;	
		ALUOP_ctrl = 2'b00;	
		ALUSrcB_ctrl = 2'b11;	
		end
		if(state==4'd2) begin	//R-type ALU operation
		//out assignments	
		ALUSrcA_ctrl = 1;	//Source A is Rs
		ALUOP_ctrl = 2'b10;	
		ALUSrcB_ctrl = 2'b00;	
		end
		if(state==4'd3) begin	//R-type ALUOut to Rd
		//assignments
		MemtoReg_ctrl=0;
		RegWrite_ctrl=1;
		RegDst_ctrl=1;
		end
		if(state==4'd4) begin	//BEQ comparison
		//assignments
		BEQ_ctrl=1;
		end
		if(state==4'd5) begin	//Write Branch target to PC
		//assignments
		PCWriteCond_ctrl=1;
		ALUSrcA_ctrl=1;
		PCSrc_ctrl = 2'b01;
		ALUOP_ctrl = 2'b01;
		ALUSrcB_ctrl = 2'b00;
		end
		if(state==4'd6) begin	//BNE comparison
		//assignments
		BEQ_ctrl=0;
		end
		if(state==4'd7) begin	//Immediate ALU operation
		//assignments
		ALUSrcA_ctrl=1;
		ALUOP_ctrl=2'b10;
		ALUSrcB_ctrl=2'b10;
		end
		if(state==4'd8) begin	//Immediate ALUOut to Rt
		//assignments
		MemtoReg_ctrl=0;
		RegWrite_ctrl = 1;
		RegDst_ctrl=0;
		end
		if(state==4'd9) begin	//Memory address computation for LWI and SWI
		//assignments
		ALUSrcA_ctrl=1;
		ALUSrcB_ctrl=2'b10;
		end
		if(state==4'd10) begin	//Load to memory contents to MDR
		//assignments
		IorD_ctrl=1;
		MemRead_ctrl = 1;
		end
		if(state==4'd11) begin	//Load MDR to Rt
		//assignments
		MemtoReg_ctrl=1;
		RegWrite_ctrl=1;
		RegDst_ctrl=0;
		end
		if(state==4'd12) begin	//Store to memory
		//assignments
		IorD_ctrl=1;
		MemWrite_ctrl=1;
		end
		if(state==4'd13) begin	//Write Jump address to PC
		//output assignments
		PCWrite_ctrl=1;
		PCSrc_ctrl =2'b10;
		end
	end
	
	always @(reset or state or Instruction_ctrlIn)
	begin 
		if(reset)
			next_state=0;
		else
			case(state)
				4'd0: if(Instruction_ctrlIn==6'b000000)//if NOOP - return to State 0
							next_state = 4'h0;
							else		//else - send to decode
							next_state = 4'h1;
				4'd1: if(Instruction_ctrlIn[5:4]==2'b01)//Arithmetic Rtype
							next_state = 4'h2;
							else
						if(Instruction_ctrlIn==6'b100000)//BEQ
							next_state = 4'h4;
							else
						if(Instruction_ctrlIn==6'b100001)//BNE
							next_state = 4'h6;
							else
						if(Instruction_ctrlIn==6'b111001)//LI
							next_state = 4'h8;
							else
						if(Instruction_ctrlIn[5:3]==3'b110)//Arithmetic I type
							next_state = 4'h7;
							else
						if(Instruction_ctrlIn==6'b111011)//lwi
							next_state = 4'h9;
							else
						if(Instruction_ctrlIn==6'b111100)//swi
							next_state = 4'h9;
							else
						if(Instruction_ctrlIn==6'b000001)//jmp
							next_state = 4'h13;
				4'd2: next_state = 4'h3;
				4'd3: next_state = 4'h0;
				4'd4: next_state = 4'h5;
				4'd5: next_state = 4'h0;
				4'd6: next_state = 4'h5;
				4'd7: next_state = 4'h8;
				4'd8: next_state = 4'h0;
				4'h9: if(Instruction_ctrlIn==6'b111011)//lwi
							next_state = 4'h10;
							else
						if(Instruction_ctrlIn==6'b111100)//jmp
							next_state = 4'h12;
				4'ha: next_state = 4'hb;
				4'hb: next_state = 4'hc;
				4'hc: next_state = 4'h0;
				4'hd: next_state = 4'h0;
			endcase
	end
		

	

endmodule
