/*Write a C program to ask the user for two starting 
numbers, and then displays the necklace sequence 
& number  of  steps  taken.*/
//1602-21-735-012 = Eshwar Gottupalli 
#include<stdio.h>
#include<conio.h>
int main()
  {
    int a,b,c,d,e;
    printf("enter the values a & b =");
    scanf("%d%d",&a,&b);
    printf("%4d %4d",a,b);
    d=a;
    e=b;
    c=d+e;
    d=e;
    e=c%10;
    while((d!=a)||(e!=b))
     {
      printf("%4d",e);
      c=d+e;
      d=e;
      e=c%10;
     }
    printf("%4d",e);
    getch();
  }   