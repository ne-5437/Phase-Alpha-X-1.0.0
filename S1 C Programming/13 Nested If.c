#include <stdio.h>
#include <conio.h>
void main(void)
 {
   float a,b,c,ans;
   clrscr();
   printf("\n Enter any 3 numbers =") ;
   scanf("%f%f%f",&a,&b,&c);
   if(a>=b)
    {
      if(a>=c) 
        ans=c;
      else
        ans=a;
    } 
   else
    {
      if(b>=c) 
        ans=c;
      else
        ans=b;
    } 
    printf("\n Second biggest no=ans=%f",ans);
   getch();
 } 