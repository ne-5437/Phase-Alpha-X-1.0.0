#include <iostream.h>
#include <conio.h>

class complex
 {
  private: int real;
	   int img;
  public: complex(void);
	  complex(int,int);
	  complex(const complex &);
	void setvalues(void);
	int getvalues(int);
	  ~complex(void);
 }

complex::complex(void)
 {
  cout<<"I'm in Default Constructor!";
  real=0;
  img=0;
 }

complex::complex(int a,int b)
 {
  cout<<"I'm in Parameterized Constructor";
  real=a;
  img=b;
 }

complex::complex(const complex &c)
 {
  cout<<"I'm in Copy Constructor";
  real=c.real;
  img=c.img;
 }

void complex::setvalues(void)
 {
  cout<<"Real=";
  cin>>real;
  cout<<"Img=";
  cin>>img;
 }

int complex::getvalues(int flag)
 {
  if(flag==0)
   return real;
  else
   return img;
 }

complex::~complex(void)
 {
  cout<<"I'm in Distructor";
  getch();
 }

void main(void)
 {
  clrscr();
  complex c1;
  cout<<"Enter c1";
  c1.setvalues();
  cout<<"c1="<<c1.getvalues(0)<<"+"<<c1.getvalues(1)<<"i";
  complex c2(-5,7);
  cout<<"c2="<<c2.getvalues(0)<<"+"<<c2.getvalues(1)<<"i";
  complex c3(c1);
  cout<<"c3="<<c3.getvalues(0)<<"+"<<c3.getvalues(1)<<"i";
  getch();
 }
