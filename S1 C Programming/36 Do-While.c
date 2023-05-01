#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int i,f,s,n,fib;
   printf("\n Enter the value of n =");
   scanf("%d",&n);
   i=3;
   f=1;
   s=1;
   printf("1  1");

   do
    {
     fib=f+s;
     printf("%4d",fib);
     f=s;
     s=fib;
     i++;
    }while(i<=n);
 
   getch();
 }