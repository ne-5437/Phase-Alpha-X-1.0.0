`include "enc.v"
module enc_tb;
reg [2:0]a,b;
wire c,d;
wire [3:0]x;
wire [3:0]y;
enc uut(a,b,c,d,x,y);
initial
 begin
$dumpfile("enc.vcd");
$dumpvars(0,enc_tb);
    a=2;b=3;
#10 a=3;b=2;
#10 a=5;b=3;
#10 $finish;
end
endmodule
