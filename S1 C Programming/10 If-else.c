#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int a,b,c,ans;
    clrscr();
    printf("\n Enter any 3 numbers a,b,c=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b) 
     {
      if(a>=c) 
       ans=a;
      else
       ans=c;
     } 
    else
     {
      if(b>=c) 
       ans=b;
      else
       ans=c;
     } 
    printf("\n Big=%d",ans);
    getch();
 }