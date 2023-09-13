module enc(a,b,c,d,x,y);
input [2:0]a;
input [2:0]b;
output c,d;
output [3:0]x,y;
assign c=a[0]^a[1]^a[2];
assign d=b[0]^b[1]^b[2];
assign x[0]=a[0];
assign x[1]=a[1];
assign x[2]=a[2];
assign y[0]=b[0];
assign y[1]=b[1];
assign y[2]=b[2];
assign x[3]=c;
assign y[3]=d;
endmodule