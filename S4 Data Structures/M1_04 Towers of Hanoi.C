#include <stdio.h>
#include <conio.h>
static int count=0;
void towerofhanoi(int n,char from,char to,char aux)
 {
  count++;
  if(n==1)
  {
   printf("\n move disc from %c to %c ",from,to);
   return;

  }
  towerofhanoi(n-1,from,aux,to);
  printf("\n move disk %d from %c to %c",n,from,to);
  towerofhanoi(n-1,aux,to,from);
 }
 void main(void)
  {
    int n ;
    clrscr();
    printf("enter n:");
      scanf("%d",&n);
 towerofhanoi(n,'A','C','B');
 printf("\n coun t=%d",count);
    getch();
  }