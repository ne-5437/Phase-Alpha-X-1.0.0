#include <stdio.h>
#include <conio.h>
void main(void)
 {
    float a,b,big;
    clrscr();
    printf("\n Enter any 2 numbers a,b=");
    scanf("%f%f",&a,&b);
    if(a>=b) 
     big=a;
    else
     big=b;
    printf("Big(%f,%f)=%f",a,b,big);
    getch();
 }