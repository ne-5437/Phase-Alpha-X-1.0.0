#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int a,b,x,y,gcd,lcm;
  clrscr();
  printf("\n Enter any 2 Numbers-");
  scanf("%d%d",&a,&b);
  x=a;
  y=b;
  while(a!=b)
   {
    if(a>b)
     a=a-b;
    if(b>a)
     b=b-a;
   }
  printf("\n GCD=%d",a);
  lcm=x*y/a;
  printf("\n LCM(%d,%d)=%d",x,y,lcm);
  getch();
 }