#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int n,i;
  clrscr();
  printf("\n Enter N-");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
   if(n%i==0)
    break;
  }

  if(i==n)
   printf("%d is PRIME!",n);
  else
   printf("%d is Not a Prime",n);
   getch();
 }