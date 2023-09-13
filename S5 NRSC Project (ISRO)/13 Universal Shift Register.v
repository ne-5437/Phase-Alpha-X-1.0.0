module usr(y,a,clk,shf);
input clk;
input[1:0]shf;
input [3:0]a;
output reg [3:0]y;
always@(posedge clk )
begin

 case(shf)
        2'b00: 
            begin
               y=y;
            end
        2'b01:
            begin
             y[3]=y[2];
 y[2]=y[1];
 y[1]=y[0];
 y[0]=1'b0;




            end
        2'b10:
            begin
               y[0]=y[1];
 y[1]=y[2];
 y[2]=y[3];
 y[3]=1'b0;
            end
        2'b11: 
            begin
               y=a;
            end
endcase
end
endmodule