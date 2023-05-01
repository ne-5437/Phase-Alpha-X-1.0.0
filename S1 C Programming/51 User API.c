#include <stdio.h>
#include <conio.h>

int doconvert(int,int);

int doconvert(int n, int r)
  {
    int ans=0;
    while(n!=0)
      {
        ans=(ans*10)+(n%r);
        n=n/r;
      } 
    return ans;
   } 

void main(void)
  {
    int n,r,ans=0;
    printf("\n Enter the value of n ");
    scanf("%d",&n);
    printf("\n Enter the value of Radix ");
    scanf("%d",&r);
    ans=doconvert(n,r);
    printf("\n %d in radix %d = %d ",n,r,ans);
    getch();
  }