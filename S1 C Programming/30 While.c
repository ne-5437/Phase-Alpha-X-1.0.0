#include <stdio.h>
#include <conio.h>
#define PI 22.0/7
void main(void)
 {
   float x, Nr, Dr, sum;
   int i,n,pwr,sign;
   clrscr();
   printf("\n Enter the Value of x in Degrees-");
   scanf("%f",&x);
   printf("\n Enter Num of Terms-");
   scanf("%d",&n);

   x = x*PI/180.0;
   printf("\n x in Rad=%f",x);

   Nr=1.0;
   Dr=1.0;
   pwr=1;
   sign=1;
   sum=1.0;
   i=2;

   while(i<=n)
    {
     Nr=Nr * x * x;
     Dr=Dr*pwr*(pwr+1); 
     pwr=pwr+2;
     sign=sign*(-1);
     sum=sum+(sign*Nr/Dr);
     i++;
    }
   printf("\n Cos(%f)=%f",x,sum);
 
   getch();
 }