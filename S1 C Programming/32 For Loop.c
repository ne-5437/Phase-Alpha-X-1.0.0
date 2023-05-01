#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int n,i;
  clrscr();
  printf("\n Enter N-");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
   {
    if((i%2!=0)||(i%3!=0))
     printf("%4d",i);
   }
 
   getch();
 }