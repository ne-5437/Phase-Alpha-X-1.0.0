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

class B:virtual public A
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

class C:virtual public A
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

 class D:public B,public C
 {
  public:
	 D(void)
	  {
	   cout<<"D's Construction"<<endl;
	  }
	 ~D(void)
	  {
	   cout<<"D's Destructor"<<endl;
	   getch();
	  }
 };


void main(void)
 {
  clrscr();
  D d1;
  getch();
 }