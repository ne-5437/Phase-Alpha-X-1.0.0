module rgba(a,b,c);
input a,b;
output  [1:0][1:0]c;

assign c[0][0]=a|b;
assign c[0][1]=a&b;
assign c[1][0]=a^b;
assign c[1][1]=a+b;

endmodule