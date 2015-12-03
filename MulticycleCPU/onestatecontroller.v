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




/*
			R type 
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
*/
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
	output reg RegDst = 1'b0;  //always write to the [21:25] reg;
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
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b0;
			PCSrc= 2'd0;
			ALUOP= 4'd0;   //Alu have 4bit selection input
			ALUSrcB= 2'd0;
		end
	else 
		begin
			if(OPcode==6'd1)	//j
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//DONT CARE but most ALUSrcA are 1
			RegWrite= 1'b0;			//dont write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b0;				//DONT CARE because ^ 
			PCSrc=2'd2;					//chose jump address
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd2;				//the immediate   not sure how this work  ^prob choose mov?
			end
			else
			if(OPcode==6'd16)	//mov
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
			end
			else
			if(OPcode==6'd17)	//not
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
			end
			else
			if(OPcode==6'd18)	//add
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
			end
			else
			if(OPcode==6'd19)	//sub
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
			end
			else			
			if(OPcode==6'd20)	//or
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
			end
			else
			if(OPcode==6'd21)	//and
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
			end
			else
			if(OPcode==6'd23)	//slt
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONT CARE because it is not branch
			ALUSrcA= 1'b1;				//ALUSrcA is the register data
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//choose Rd to write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//Alu have 4bit selection input
			ALUSrcB= 2'd0;				//choose from register
			end
			else
			if(OPcode==6'd32)	//beq
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b1;					//BEQ
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b0;			//dont write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//DONT CARE because of ^ 
			PCSrc=2'd1;					//branch instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd0;				//ALUB choose from register
			end
			else
			if(OPcode==6'd33)	//bne
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//BNE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b0;			//dont write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//DONT CARE because of ^ 
			PCSrc=2'd1;					//branch instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd0;				//ALUB choose from register
			end
			else
			if(OPcode==6'd50)	//addi
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			end
			else
			if(OPcode==6'd51)	//subi
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			end
			else
			if(OPcode==6'd52)	//ori
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			end
			else
			if(OPcode==6'd53)	//andi
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			end
			else
			if(OPcode==6'd55)	//slti
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			end
			else
			if(OPcode==6'd57)	//li
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b0;			//no mem load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b1;			//will write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			end
			else
			if(OPcode==6'b111011)	//lwi
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemWrite= 1'b0;			//dont write to memory
			MemtoReg= 1'b1;			//load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b1;			//write to register
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			end
			else
			if(OPcode==6'b111100)	//swi
			begin
			PCWriteCond= 1'b0;		//this became useless cuz PC always change to new value
			PCWrite= 1'b1;				//this always true because ^
			IorD= 1'b0;					//select instruction address from pc
			MemRead= 1'b1;				//Read IMem for instruction
			MemtoReg= 1'b0;			//dont load to register
			IRWrite= 1'b1;				//activate the decoder
			BEQ= 1'b0;					//DONTCARE
			ALUSrcA= 1'b1;				//ALUA comes from the register
			RegWrite= 1'b0;			//dont write to reg
			RegDst = 1'b0;  //always write to the [21:25] reg= 1'b1;				//write to 
			PCSrc=2'd0;					//normal instruction
			ALUOP= OPcode[3:0];   	//ALU will compare A and B anyway
			ALUSrcB= 2'd2;				//ALUB choose from immediate
			MemWrite= 1'b1;			//write to memory
			end
		end
end

endmodule
