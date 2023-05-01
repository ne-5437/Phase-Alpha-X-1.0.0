#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int a;
   clrscr();
   printf("\n Enter a=") ;
   scanf("%d",&a);
   if(a&0x8000)
    printf("\n Negative No!");
   else
    printf("\n Positive No!");
   getch();
 } 