#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  int n,r,sum;
  scanf("%d", &n);
  sum=0;
  if(n>99999&&n<10000)
    {
     getch();
     exit (0);
    }
  do {
  r=n%10;
  sum=sum+r;
  n=n/10;
  }while (n!=0);
  printf ("%d",sum);
  return 0;
}
