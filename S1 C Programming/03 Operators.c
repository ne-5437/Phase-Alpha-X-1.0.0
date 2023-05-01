#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int a,b,c;
    printf("\n Enter the value of a=");
    scanf("%d",&a);
    printf("\n Enter the value of b=");
    scanf("%d",&b);
    c=a&b;
    printf("\n a&b=%d",c);
    c=a|b;
    printf("\n a|b=%d",c);
    c=a^b;
    printf("\n a^b=%d",c);
    c=a<<3;
    printf("\n a<<3=%d",c);
    c=a>>3;
    printf("\n a>>3=%d",c);
    printf("\n Evaluating the precedence of operators (c=a&3<<5^b/6>>4)");
    c=a&3+7<<5^b-8/6>>4;
    printf("\n c=%d",c);
    getch();
 }