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

   Nr=x;
   Dr=1.0;
   pwr=1;
   sign=1;
   sum=x;
   i=2;

   do
    {
     Nr=Nr * x * x;
     Dr=Dr*(pwr+1)*(pwr+2); 
     pwr=pwr+2;
     sign=sign*(-1);
     sum=sum+(sign*Nr/Dr);
     i++;
    }while(i<=n);
   printf("\n Sin(%f)=%f",x,sum);
 
   getch();
 }