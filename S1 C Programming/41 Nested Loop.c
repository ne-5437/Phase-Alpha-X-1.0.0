#include <stdio.h>
#include <conio.h>
void main(void)
 {
  float x,Nr,Dr,sum=0.0;
  int i,n;
  clrscr();
  printf("\n x=");
  scanf("%d",&x);
  printf("\n n=");
  scanf("%d",&n);
  i=2;
  Nr=x;
  Dr=1.0;
  sum=10+x;
  while(i<=n) 
   {
     Nr=Nr*x;
     Dr=Dr*i;
     sum=sum+(Nr/Dr);
     i++;
   } 
  printf("\n e^x = %f",sum); 
   getch();
 }