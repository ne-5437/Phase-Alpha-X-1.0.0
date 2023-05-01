#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int a,b,c;
    printf("\n Enter the value of a=");
    scanf("%d",&a);
    printf("\n Enter the value of b=");
    scanf("%d",&b);
    c=a+b;
    printf("\n a+b=%d",c);
    c=a-b;
    printf("\n a-b=%d",c);
    c=a*b;
    printf("\n a*b=%d",c);
    c=a/b;
    printf("\n a/b=%d",c);
    printf("\n Evaluating the precedence of operators among arithmetic (c=a+2-5*b+3/2) ");
    c=a+2-5*b+3/2;
    printf("\n c=%d",c);
    getch();
 }