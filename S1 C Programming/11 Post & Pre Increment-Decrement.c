#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int i;
  clrscr();
  printf("\n Enter the value of i="); 
  scanf("%d",&i);
  ++i;
  printf("\n Pre increment (++i) = %d",i);
  i++;
  printf("\n Post increment (i++) = %d",i);
  --i;
  printf("\n Pre decrement (--i) = %d",i);
  i--;
  printf("\n Post decrement (i--) = %d",i);
  getch();
 } 
    