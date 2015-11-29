`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:03:36 11/28/2015 
// Design Name: 
// Module Name:    onestatecontroller 
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
module onestatecontroller(clock,reset,OPcode,
					PCWriteCond,
					PCWrite,
					IorD,
					MemRead,
					MemWrite,
					MemtoReg,
					IRWrite,
					BEQ,
					ALUSrcA,
					RegWrite,
					RegDst,
					PCSrc,
					ALUOP,
					ALUSrcB
					);
	input clock,reset;
	input [5:0]OPcode;
	
	//Control line output reg regs				
	output reg PCWriteCond;
	output reg PCWrite;
	output reg IorD;
	output reg MemRead;
	output reg MemWrite;
	output reg MemtoReg;
	output reg IRWrite;
	output reg BEQ;
	output reg ALUSrcA;
	output reg RegWrite;
	output reg RegDst;
	output reg [1:0]PCSrc;
	output reg [3:0]ALUOP;
	output reg [1:0]ALUSrcB;

always @(reset or OPcode)
begin
	if(reset)
		begin
			PCWriteCond= 1'b0;
			PCWrite= 1'b0;
			IorD= 1'b0;
			MemRead= 1'b0;
			MemWrite= 1'b0;
			MemtoReg= 1'b0;
			IRWrite= 1'b0;
			BEQ= 1'b0;
			ALUSrcA= 1'b0;
			RegWrite= 1'b0;
			RegDst= 1'b0;
			PCSrc= 2'd0;
			ALUOP= 4'd0;
			ALUSrcB= 2'd0;
		end
	else 
		begin
			if(OPcode==6'd1)	//j
			PCSrc=2'd2;
			else
			if(OPcode==6'd16)	//mov
			PCSrc=2'd0;
			else
			if(OPcode==6'd17)	//not
			PCSrc=2'd0;
			else
			if(OPcode==6'd18)	//add
			PCSrc=2'd0;
			else
			if(OPcode==6'd19)	//sub
			PCSrc=2'd0;
			else			
			if(OPcode==6'd20)	//or
			PCSrc=2'd0;
			else
			if(OPcode==6'd21)	//and
			PCSrc=2'd0;
			else
			if(OPcode==6'd23)	//slt
			PCSrc=2'd0;
			else
			if(OPcode==6'd32)	//beq
			PCSrc=2'd1;
			else
			if(OPcode==6'd33)	//bne
			PCSrc=2'd1;
			else
			if(OPcode==6'd50)	//addi
			PCSrc=2'd0;
			else
			if(OPcode==6'd51)	//subi
			PCSrc=2'd0;
			else
			if(OPcode==6'd52)	//ori
			PCSrc=2'd0;
			else
			if(OPcode==6'd53)	//andi
			PCSrc=2'd0;
			else
			if(OPcode==6'd55)	//slti
			PCSrc=2'd0;
			else
			if(OPcode==6'd57)	//li
			PCSrc=2'd0;
			else
			if(OPcode==6'd59)	//lwi
			PCSrc=2'd0;
			else
			if(OPcode==6'd60)	//swi
			PCSrc=2'd0;
		end
end

endmodule
