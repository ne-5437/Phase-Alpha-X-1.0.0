#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
  {
    float a,b,c,delta,r1,r2,real,img;
    printf("\n Enter the coefficients of ax^2+bx+c=0");
    scanf("%f%f%f",&a,&b,&c);
    delta=(b*b-(4.0*a*c));
    if(delta==0)
      {
        printf("\n The roots are real & equal");
        r1=(-b)/(2.0*a);
        r2=r1;
        printf("\n Roots are r1=%f, r2=%f",r1,r2);
      } 
    else if(delta>0)
      {
        printf("\n The roots are real & distinct");
        r1=(-b+sqrt(delta))/(2.0*a);
        r2=(-b-sqrt(delta))/(2.0*a);
        printf("\n Roots are r1=%f, r2=%f",r1,r2);
      } 
    else
     	{
        printf("\n The roots are imaginary");
        real=-b/(2.0*a);
        img=sqrt(-delta)/(2.0*a);
        printf("Root 1 = %f+i%f",real,img);
        printf("Root 2 = %f-i%f",real,img);
      }
    getch();
  }