#include <stdio.h>
#include <conio.h>

long fact(int);

long fact(int x)
  {
    if(x==1)
      return 1;
    else
      return (x*fact(x-1));
   } 

void main(void)
  {
    int n;
    long ans;
    printf("\n Enter the value of n ");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d! = %ld",n,ans); 
    getch();
  }