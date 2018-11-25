`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:01:48 11/23/2018
// Design Name:   alu
// Module Name:   Z:/Shared Folder VPC/Verilog Projects/alu/alu_tb.v
// Project Name:  alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg [1:0] ALUControl;

	// Outputs
	wire [31:0] Result;
	wire [3:0] ALUFlags;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.a(a), 
		.b(b), 
		.ALUControl(ALUControl), 
		.Result(Result), 
		.ALUFlags(ALUFlags)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		ALUControl = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a = 32'h00000000;
		b = 32'h00000000;
		ALUControl = 2'b00; //0
		
		#100
		
		a = 32'h00000000;
		b = 32'hFFFFFFFF;
		ALUControl = 2'b00; //0
		 
		#100
		
		a = 32'h00000001;
		b = 32'hFFFFFFFF;
		ALUControl = 2'b00; //0
		
		#100
		
		a = 32'h000000FF;
		b = 32'h00000001;
		ALUControl = 2'b00; //0
		
		#100
		
		a = 32'h00000000;
		b = 32'h00000000;
		ALUControl = 2'b01; //1
		
		#100
		
		a = 32'h00000000;
		b = 32'hFFFFFFFF;
		ALUControl = 2'b01; //1
		
		#100
		
		a = 32'h00000001;
		b = 32'h00000001;
		ALUControl = 2'b01; //1
		
		#100
		
		a = 32'h00000100;
		b = 32'h00000001;
		ALUControl = 2'b01; //1
		
		#100
		
		a = 32'hFFFFFFFF;
		b = 32'hFFFFFFFF;
		ALUControl = 2'b10; //2
		
		#100
		
		a = 32'hFFFFFFFF;
		b = 32'h12345678;
		ALUControl = 2'b10; //2
		
		#100
		
		a = 32'h12345678;
		b = 32'h87654321;
		ALUControl = 2'b10; //2
		
		#100
		
		a = 32'h00000000;
		b = 32'hFFFFFFFF;
		ALUControl = 2'b10; //2
		
		#100
		
		a = 32'hFFFFFFFF;
		b = 32'hFFFFFFFF;
		ALUControl = 2'b11; //3
		
		#100
		
		a = 32'h12345678;
		b = 32'h87654321;
		ALUControl = 2'b11; //3
		
		#100
		
		a = 32'h00000000;
		b = 32'hFFFFFFFF;
		ALUControl = 2'b11; //3
		
		#100
		
		a = 32'h00000000;
		b = 32'h00000000;
		ALUControl = 2'b11; //3
		
		
	end
      
endmodule

