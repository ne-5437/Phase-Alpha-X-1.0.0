#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int i,r,n;
   clrscr();
   printf("\n Enter the value of n =");
   scanf("%d",&n);
   i=2;
   while(i<n) 
    {
     r=i*i;
     n%r;
     if(n%r==0)
      printf("\n %d",i); 
     i++;
    }
 
   getch();
 }