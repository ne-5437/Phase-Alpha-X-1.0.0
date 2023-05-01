#include <stdio.h>
#include <conio.h>
void main(void)
 {
   unsigned int n,i;
   unsigned long f;
   clrscr();
   printf("\n Enter n-");
   scanf("%d",&n);

   f=1;
   for(i=1;i<=n;i++)
    f=f*i;
   printf("\n %d!=%ld",n,f); 
   getch();
 }