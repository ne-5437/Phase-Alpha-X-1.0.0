#include <stdio.h>
#include <conio.h>

int a=2;
void fun(void);
void fun2(void);

void fun(void)
  {
    int a=5;
    printf("\n Addr(a)=%p,a=%d",&a,a);
  } 

void fun2(void) 
  {
    a=15;
    printf("\n Addr(a)=%p,a=%d",&a,a);
  } 

int main(void)
  {
    int a=10;
    printf("\n Addr(a)=%p,a=%d",&a,a);
    fun();
    printf("\n Addr(a)=%p,a=%d",&a,a);
    fun2();
    printf("\n Addr(a)=%p,a=%d",&a,a);
    getch();
  }