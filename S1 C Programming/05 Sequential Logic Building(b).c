#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int a,b;
    printf("\n Enter a=");
    scanf("%d",&a);
    printf("\n Enter b=");
    scanf("%d",&b);
    printf("\n Before Swapping a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After Swapping a=%d and b=%d",a,b);
    getch();
 }