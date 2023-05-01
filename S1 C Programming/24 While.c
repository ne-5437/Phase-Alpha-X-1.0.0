#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int i,n;
    clrscr();
    printf("\n Enter the value of n=");
    scanf("%d",&n);
    i=1;
    while(i<=n) 
        {
         printf("\t %4d",i++);
        } 
    getch();
 }