/*Implement a C program to find the second biggest
 number of the given 4 numbers by using if-else syntax.*/
//1602-21-735-012 = Eshwar Gottupalli 
#include <stdio.h>
#include <conio.h>
void main(void)
{
 int a,b,c,d,ans;
 printf("\n Enter the numbers=");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>=b)
  {
    if(a>=c)
     {
       if(a>=d)
        {
          if(b>=c)  
           {
             if(b>=d)
              ans=b;
             else
              ans=d;
           }
          else
              { 
                if(c>=d)
                 ans=c;
                else
                 ans=d;
              }
         }
       else
           ans=a;
     }
    else
        {
         if(c>=d)
          {
            if(a>=d) 
             ans=a;
            else
             ans=d;
          }
        }
  }
 else
   {
     if(b>=c)
      {
        if(b>=d)
         {
          if(a>=d)
           {
             if(a>=c)
              ans=a;
             else
              ans=c;
           }
          else
           {
             if(c>=d)
              ans=c;
             else
              ans=d;
           }
         }
        else
         ans=b;
        
      }
     else
       {
         if(c>=d)
          {
            if(b>=d)
             ans=b;
            else
             ans=d;
          }
         else
          ans=c;
       }
   }
 printf("\n second biggest number=%d",ans);
 getch( );
         
} 