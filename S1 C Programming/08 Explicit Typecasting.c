#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int c;
    float f;
    printf("\n Enter the temperature in c=");
    scanf("%d",&c);
    f=((9.0/5*c)+32);
    printf("\n Temperature in F=%3f",f);
    getch();
 }