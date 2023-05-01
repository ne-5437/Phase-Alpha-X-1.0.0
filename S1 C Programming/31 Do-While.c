#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int n,sum,r,Backup;
  clrscr();
  printf("\n Enter N-");
  scanf("%d",&n);
  sum=0;
  Backup=n;
  while(n!=0)
   {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
   }
  if(sum==Backup)
   printf("%d is ARMSTRONG!",Backup);
  else
   printf("%d is Not an Armstrong Number",Backup);
  getch();
 }