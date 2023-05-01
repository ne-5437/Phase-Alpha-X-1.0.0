#include <stdio.h>
#include <conio.h>
#define PI 3.14
void main(void)
 {
    float r,area,vol;
    clrscr();
    printf("\n Enter radius r=");
    scanf("%f",&r);
    area=4*PI*r*r;
    vol=4.0/3*PI*r*r*r;
    printf("\n area=%f",area);
    printf("\n volume=%f",vol);
    getch();
 }