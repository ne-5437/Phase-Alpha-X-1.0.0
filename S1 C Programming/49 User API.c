#include <stdio.h>
#include <conio.h>

long fact(int);

long fact(int x)
 {
  long ans=1;
  int i;
  for(i=1;i<=x;i++)
   ans=ans*i;
  return ans;
 }

void main(void)
 {
  int n,i,j;
  clrscr();
  printf("Enter N-");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
    for(j=0;j<n-i-1;j++)
     printf(" ");
    for(j=0;j<=i;j++)
     printf("%4d",fact(i)/(fact(j)*fact(i-j)));
    printf("\n");
   }
  getch();
 }
    