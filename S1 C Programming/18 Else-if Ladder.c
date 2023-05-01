#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int d,m,y;
   clrscr();
   printf("\n Enter Today's Date in dd-mm-yyyy = ");
   scanf("%d%d%d",&d,&m,&y);
   if((y%4==0)&&(m==2)&&(d==29))
    {
     d=1,m=3;
    }
   else if((m==2)&&(d==28)&&(y%4!=0))
    {
     d=1,m=3;
    }
   else if((d==31)||(m==12))
    {
     d=m=1,y=y+1;
    }
   else if((d==31)&&(m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==12)) 
    {
     d=1,m=m+1;
    }
   else if((d==30)&&(m==4)||(m==6)||(m==9)||(m==11))
    {
     d=1,m=m+1;
    } 
   else
     d=d+1;
   printf("\n Tomorrow's Date =%d-%d-%d",d,m,y);
   getch();
 } 
                    
