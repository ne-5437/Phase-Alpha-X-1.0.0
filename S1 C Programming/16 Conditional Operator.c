#include <stdio.h>
#include <conio.h>
void main(void) 
 {
   int a,b,c,d,ans;
   clrscr();
   printf("\n Enter any 4 numbers =");
   scanf("%d%d%d%d",&a,&b,&c,&d);

   ans=(a>=b)?a:b;
   printf("\n Big(%d,%d)=%d",a,b,ans);

   ans=(a>=b)?((a>=c)?a:c)
             :((b>=c)?b:c);
   printf("\n Big(%d,%d,%d)=%d",a,b,c,ans);
            
   ans=(a>=b)?((a>=c)?((a>=d)?a:d)
                     :((c>=d)?c:d)) 
             :((b>=c)?((b>=d)?b:d)
                     :((c>=d)?c:d));
   printf("\n Big(%d,%d,%d,%d)=%d",a,b,c,d,ans);         
   getch();
 } 
         