#include <stdio.h>
#include <conio.h>

int fib(int);

int fib(int x)
 {
  if(x==1||x==2)
   return 1;
  else
   return (fib(x-1)+fib(x-2));
 }

void main(void)
 {
  int n,i;
  clrscr();
  printf("N-");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
   printf("%4d",fib(i));

  getch();
 }
