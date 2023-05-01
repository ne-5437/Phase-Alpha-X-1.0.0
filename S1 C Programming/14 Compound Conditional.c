#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int a,b,c,d,ans;
   clrscr();
   printf("\n Enter any 4 numbers =") ;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a<=b)
    {
      if(a<=c) 
       {
         if(a<=d) 
          ans=a;
         else
          ans=d;
       } 
      else
       {
         if(c<=d)
          ans=c;
         else
          ans=d;
       } 
    } 
   else
    {
      if(b<=c) 
       {
         if(b<=d) 
          ans=b;
         else
          ans=d;
       } 
      else
       {
         if(c<=d) 
          ans=c;
         else
          ans=d;
       } 
    } 
   printf("\n Smallest no=ans=%d",ans);
   getch();
 } 