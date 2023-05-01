#include <stdio.h>
#include <conio.h>

int isprime(int);

int isprime(int n)
  {
   int i;
   for(i=2;i<n;i++)
    {
      if(n%i==0)
      return 0;
    }
  return 1;
  }

void main(void)
  {
    int i,x;
    clrscr();
    printf("\n Enter the value of x= ");
    scanf("%d",&x);
    for(i=2;i<x-1;i++) 
      {
        if((isprime(i)==1)&&(isprime(x-i)==1)) 
           printf("\n Sum = %d + %d",i,x-i);
     } 
    getch();
  } 

    
    