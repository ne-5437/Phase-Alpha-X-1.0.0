#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int r,n,sum;
    clrscr();
    printf("\n Enter the value of n=");
    scanf("%d",&n);
    sum=0;
    while(n!=0) 
        {
         r=(n%10);
         sum=sum+r;
         n=(n/10);
        } 
    printf("Entire Sum is %d",sum);      
    getch();
 }