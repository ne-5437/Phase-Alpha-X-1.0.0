#include <iostream.h>
#include <conio.h>

class A
 {
  public:
	 A(void)
	  {
	   cout<<"A's Constructor"<<endl;
	  }
	 ~A(void)
	  {
	   cout<<"A's Destructor"<<endl;
	   getch();
	  }
 };

class B:public A
 {
  public:
	 B(void)
	  {
	   cout<<"B's Constructor"<<endl;
	  }
	 ~B(void)
	  {
	   cout<<"B's Destructor"<<endl;
	   getch();
	  }
 };

class C:public A
 {
  public:
	 C(void)
	  {
	   cout<<"C's Construction"<<endl;
	  }
	 ~C(void)
	  {
	   cout<<"C's Destructor"<<endl;
	   getch();
	  }
 };

void main(void)
 {
  clrscr();
  B b1;
  C c1;
  getch();
 }