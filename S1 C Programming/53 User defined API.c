#include <stdio.h>
#include <conio.h>


int getCount(int);

int getCount(int x)
 {
  int count=0;
  while(x!=0)
   {
    if(x%2==1)
     count++;
    x/=2;
   }
  return count;
 }

void main(void)
 {
  int n,ans=0;
  clrscr();
  printf("N=");
  scanf("%d",&n);
  ans=getCount(n);
  printf("\nans=%d",ans);
  getch();
 } 