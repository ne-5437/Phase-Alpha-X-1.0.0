#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int r,n,sum,i;
    clrscr();
    printf("\n Enter the value of n=");
    scanf("%d",&n);
    sum=0,i=1;
    while(i<n) 
        {
         if(n%i==0)
          sum=sum+i;
          i++;
        } 
    if(sum==n)
      {
        printf("\n %d is a perfect number",n);
      } 
    else
    printf("\n %d is not a perfect number",n);      
    getch();
 }