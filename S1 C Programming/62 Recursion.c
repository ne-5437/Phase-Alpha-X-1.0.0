#include <stdio.h>
#include <conio.h>

int getGCD(int,int);

int getGCD(int x,int y)
 {
  if(x==y)
   return x;
  if(x>y)
   return getGCD(x-y,y);
  if(y>x)
   return getGCD(x,y-x);
 }

void main(void)
 {
  int a,b,gcd,lcm;
  clrscr();
  printf("Enter any two Numbers-");
  scanf("%d%d",&a,&b);
  gcd=getGCD(a,b);
  printf("\n GCD(%d,%d)=%d",a,b,gcd);
  lcm=(a*b)/gcd;
  printf("\n LCM(%d,%d)=%d",a,b,lcm);
  getch();
 }