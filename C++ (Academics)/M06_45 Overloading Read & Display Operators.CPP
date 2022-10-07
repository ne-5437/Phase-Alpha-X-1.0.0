#include <iostream.h>
#include <conio.h>
class complex
 {
  private: int a;
	   int b;
	   int c;
  public: complex(void);
	  complex(int,int);
	  complex(const complex &);
	  friend istream & operator>>(istream &,complex &);
	  friend ostream & operator<<(ostream &,complex &);
	  ~complex(void);
 }
complex::complex(void)
 {
  a=0;
  b=0;
 }
complex::complex(int x, int y)
 {
  a=x;
  b=y;
 }
complex::complex(const complex &c)
 {
  a=c.a;
  b=c.b;
 }
istream & operator>>(istream &in, complex &c)
 {
  cout<<"a=";
  in>>c.a;
  cout<<"b=";
  in>>c.b;
 }
ostream & operator<<(ostream & out, complex &c)
 {
  cout<<c.a<<"+"<<c.b<<"i"<<endl;
  return out;
 }
complex::~complex(void)
 {
  getch();
 }
void main(void)
 {
  clrscr();
  complex c1,c2;
  cout<<"enter c1=";
  cin>>c1;
  cout<<"enter c2";
  cin>>c2;
  cout<<c1;
  cout<<c2;
  getch();
 }



