#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int h,m,s,ch;
   clrscr();
   printf("\n Enter time h:m:s =");
   scanf("%d%d%d",&h,&m,&s);
   printf("\n Choose \n 1. 12Hr \n 2. 24Hr");
   scanf("%d",&ch);
   if(ch==1)
    {
     printf("\n Choose \n 1.AM \n 2.PM");
     scanf("%d",&ch);
     if(ch==1&&h==12)
      h=0;
     else if(ch==2&&h!=12)
      h=h+12;
    }
   printf("\n Time in h:m:s =%d:%d:%d",h,m,s);
   if((h==23)&&(m==59)&&(s==59))
    {
      h=0,m=0,s=0;
    }
   else if((m==59)&&(s==59))
    {
      h=h+1,m=0,s=0;
    }
   else if(s==59)
    {
      m=m+1,s=0;
    }
   else
    s=s+1;
   printf("\n Time after 1 sec in 24hr format is = %d:%d:%d",h,m,s);
   getch();
 } 