#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int a,b,c,d,e;
    clrscr();
    printf("\n Enter the value of a,b,c,d=");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("\n The precedence of operators (e=((a+2)^(b-3))|(5)&&((c<<3)&d))");
    e=((a+2)^(b-3))|(5)&&((c<<3)&d);
    printf("\n Value of e=%d",e);
    getch();
 }