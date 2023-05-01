#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int i,n;
    clrscr();
    printf("\n Enter the value of n=");
    scanf("%d",&n);
    i=n;
    while(i>=1)
     {
       if((i%3==0)&&(i%2==0))
         printf("\n %d",i); 
         i--;
     }
    getch();
 }