#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int i,j,k,n;
   clrscr();
   printf("\n Enter N-");
   scanf("%d",&n);
   k=1;
   for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
      {
       printf("%4d",k);
       k++;
      }
     printf("\n");
    } 
  getch();
 }