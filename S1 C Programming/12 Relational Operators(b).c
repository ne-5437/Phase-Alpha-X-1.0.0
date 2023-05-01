#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int a;
   clrscr();
   printf("\n Enter a=") ;
   scanf("%d",&a);
   if(!(a&1))
    printf("\n %d is Even No!",a);
   else
    printf("\n %d is Odd No!",a);
   getch();
 } 