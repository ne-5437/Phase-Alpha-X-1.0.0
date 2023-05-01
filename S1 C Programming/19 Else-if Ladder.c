#include <stdio.h>
#include <conio.h>
void main(void)
 {
   int d,m,y;
   clrscr();
   printf("\n Enter Today's Date in dd-mm-yyyy = ");
   scanf("%d%d%d",&d,&m,&y);
   if((y%4==0)&&(m==3)&&(d==1))
    {
     d=29,m=2;
    }
   else if((m==3)&&(d==1)&&(y%4!=0))
    {
     d=28,m=2;
    }
   else if((d==1)&&(m==1))
    {
     d=31,m=12,y=y-1;
    }
   else if((d==1)&&(m==2)||(m==4)||(m==6)||(m==8)||(m==9)||(m==11)) 
    {
     d=31,m=m-1;
    }
   else if((d==1)&&(m==5)||(m==7)||(m==10)||(m==12))
    {
     d=30,m=m-1;
    } 
   else
     d=d-1;
   printf("\n Yesterday's Date =%d-%d-%d",d,m,y);
   getch();
 } 
                    
