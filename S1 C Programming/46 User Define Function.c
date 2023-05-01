#include <stdio.h>
#include <conio.h>

long fact(int); //function declaration.

long fact(int x) //function implementation
 {
  long ans=1,i=1;
  for(i=1;i<=x;i++)
   ans = ans * i;
  return ans;
 }

void main(void)
 {
  int i,n,r,backup,sum=0;
  clrscr();
  printf("N-");
  scanf("%d",&n);
  backup=n;
  while(n!=0)
   {
    r=n%10;
    sum=sum+fact(r);
    n=n/10;
   }
  if(backup==sum)
   printf("%d - STRONG Number!",backup);
  else
   printf("%d - Not a STRONG Number!",backup);
  getch();
 }