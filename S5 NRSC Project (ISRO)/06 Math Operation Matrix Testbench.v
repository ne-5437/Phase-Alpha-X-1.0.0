`include "rgba.v"
module rgba_tb;
reg a,b;
wire [1:0][1:0]c;
rgba uut(a,b,c);
initial 
begin
$dumpfile("rgba.vcd");
$dumpvars(0,rgba_tb);
a=0;b=0;
#10 b=1;
#10 a=1;b=0;
#10 b=1;
#10 $finish;
end
endmodule