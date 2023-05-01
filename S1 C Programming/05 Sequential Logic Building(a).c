#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int a,b,temp;
    printf("\n Enter a=");
    scanf("%d",&a);
    printf("\n Enter b=");
    scanf("%d",&b);
    printf("\n Before Swapping a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After Swapping a=%d and b=%d",a,b);
    getch();
 }