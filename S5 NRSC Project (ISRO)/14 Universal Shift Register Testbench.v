`include "usr.v"
module usr_tb;
reg [3:0]a;
reg [1:0]shf;
reg clk;
wire [3:0]y;
usr uut(y,a,clk,shf);
initial
clk=1'b0;
always #5 clk=~clk;
initial
begin


$dumpfile("usr.vcd");
$dumpvars(0,usr_tb);

a=4'b1010;shf=2'b00;
#10 shf=2'b11;
#10 shf=2'b10;
#10 shf=2'b01;
#10 shf=2'b00;
#10 $finish;
end
endmodule