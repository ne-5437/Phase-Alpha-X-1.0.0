#include <stdio.h>
#include <conio.h>

int a=2;
void fun(void);

void fun(void)
  {
    static int a;
    a=10;
    printf("\n Addr(a)=%p,a=%d",&a,a);
  } 

int main(void)
  {
    int a=5;
    printf("\n Addr(a)=%p,a=%d",&a,a);
    fun();
    fun();
    getch();
  }