#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int i,n;
    clrscr();
    printf("\n Enter the value of n=");
    scanf("%d",&n);
    i=1;
    do
     {
       if((i%3==0)&&(i%5!=0))
         printf("\n %d",i); 
         i++;
     }while(i<=n);
    getch();
 }