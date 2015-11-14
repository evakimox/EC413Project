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
					ALUSrcA_crtl,
					RegWrite_ctrl,
					RegDst_ctrl,
					PCSrc_ctrl,
					ALUOP_ctrl,
					ALUSrcB_ctrl
					);
	input clock,reset;
	input [5:0]Instruction_ctrlIn;
					
	output PCWriteCond_ctrl;
	output PCWrite_ctrl;
	output IorD_ctrl;
	output MemRead_ctrl;
	output MemWrite_ctrl;
	output MemtoReg_ctrl;
	output IRWrite_ctrl;
	output BEQ_ctrl;
	output ALUSrcA_crtl;
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
	reg ALUSrcA_crtl;
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
	always @ (posedge clk)
	state <= next_state;
	
	always @(state)
	begin
		if(state==4'd0) begin
		//output assignments
		//PCWriteCond_ctrl=0;
		PCWrite_ctrl=1;
		IorD_ctrl=0;
		MemRead_ctrl=1;
		//MemWrite_ctrl=0;
		//MemtoReg_ctrl=0;
		IRWrite_ctrl=1;
		//BEQ_ctrl=1;
		ALUSrcA_ctrl=0;
		//RegWrite_ctrl=0;
		//RegDst_ctrl=0;
		PCSrc_ctrl=2'b00;
		ALUOP_ctrl=2'b00;
		ALUSrcB_ctrl=2'b01;
		end
		if(state==4'd1) begin
		//I think the follwing is just add whatever needed(new) and changed
		end
		if(state==4'd2) begin
		//out assignments
		end
		if(state==4'd3) begin
		//assignments
		end
		if(state==4'd4) begin
		//assignments
		end
		if(state==4'd5) begin
		//assignments
		end
		if(state==4'd6) begin
		//assignments
		end
		if(state==4'd7) begin
		//assignments
		end
		if(state==4'd8) begin
		//assignments
		end
		if(state==4'd9) begin
		//assignments
		end
		if(state==4'd10) begin
		//assignments
		end
		if(state==4'd11) begin
		//assignments
		end
		if(state==4'd12) begin
		//assignments
		end
		if(state==4'd13) begin
		//output assignments
		end
	end
	
	always @(reset or state or Instruction_ctrlIn)
	begin 
		if(reset)
			next_state=0;
		else
			case(state)
				4'd0: next_state = 4'h1;
				4'd1: if(Instruction_ctrlIn==6'b010101)
							next_state = 4'ha;
						else
							next_state = 4'hb;
				4'd3: next_state = 4'hf;
				4'd4: next_state = 4'hf;
				4'd5: next_state = 4'hf;
				4'd6: next_state = 4'hf;
				4'd7: next_state = 4'hf;
				4'd8: next_state = 4'hf;
				4'd9: next_state = 4'hf;
				4'ha: next_state = 4'hf;
				4'hb: next_state = 4'hf;
				4'hc: next_state = 4'hf;
				4'hd: next_state = 4'hf;
			endcase
	end
		

	

endmodule
