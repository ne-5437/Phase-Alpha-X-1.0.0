#include <stdio.h>
#include <conio.h>

int dosum(int);

int dosum(int x)
  {
    static int ans=0;
    if(x==0)
      return ans;
    else 
      {
        ans=ans+(x%10);
        return dosum(x/10);
      }
   } 

void main(void)
  {
    int n,ans;
    printf("\n Enter the value of n ");
    scanf("%d",&n);
    ans=dosum(n);
    printf("Sum = %d",ans);   
    getch();
  }