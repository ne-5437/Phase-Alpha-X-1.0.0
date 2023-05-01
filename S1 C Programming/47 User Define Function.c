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
    for(i=x+1; ;i++) 
      {
        if(isprime(i)==1)
         {
           printf("\n The Next prime is = %d",i);
           break;
         } 
      } 
    for(i=x-1; ;i--)
      {
        if(isprime(i)==1)
         {
           printf("\n The prev prime is = %d",i);
           break;
         } 
      } 
    getch();
  } 

    
    