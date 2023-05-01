#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int n,i;
  clrscr();
  printf("\n Enter N-");
  scanf("%d",&n);
  i=1;
  while(i<=20)
   {
     printf("\n%d x %d = %d",n,i,(n*i));
     i++;
   } 
  getch();
 }