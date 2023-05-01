#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int i=1,n;
  clrscr();
  printf("\n Enter the value of n-");
  scanf("%d",&n);
  i=1;
  back:
  printf("%4d",i);
  i++;
  if(i<=n)
   goto back;
  printf("\n Have a Good Day!"); 
   getch();
 }