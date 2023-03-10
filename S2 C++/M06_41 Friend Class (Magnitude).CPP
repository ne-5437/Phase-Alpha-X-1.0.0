#include <iostream.h>
#include <conio.h>
#include <math.h>
class rational;
class complex
{
 private:
	 int real;
	 int img;
 public:
	complex(void);
	complex(int,int);
	complex(const complex &);
	void setvalues();
	int getvalues(int);
	friend int comp(const complex &,const rational &);
	~complex(void);
};
class rational
{
 private:
	 int nr;
	 int dr;
 public:
	 rational(void);
	 rational(int,int);
	 rational(const rational &);
	 void setvalues();
	 int getvalues(int);
	 friend int comp(const complex &,const rational &);
	 ~rational(void);
};
complex::complex(void)
{
 real=0;
 img=0;
}
rational::rational(void)
{
 nr=0;
 dr=0;
}
complex::complex(int a,int b)
{
  real=a;
  img=b;
}
rational::rational(int a,int b)
{
 nr=a;
 dr=b;
}
complex::complex(const complex &c)
{
 real=c.real;
 img=c.img;
}
rational::rational(const rational &r)
{
 nr=r.nr;
 dr=r.dr;
}
void complex::setvalues()
{
 cout<<"real=";
 cin>>real;
 cout<<"img=";
 cin>>img;
}
void rational::setvalues()
{
 cout<<"nr=";
 cin>>nr;
 cout<<"dr=";
 cin>>dr;
}
int complex::getvalues(int flag)
{
 if(flag==0)
 return real;
 else
 return img;
}
int rational::getvalues(int flag)
{
 if(flag==0)
 return nr;
 else
 return dr;
}
int comp(const complex &c,const rational &r)
{
 float mc=sqrt((c.real*c.real)+(c.img*c.img));
 float mr=fabs(r.nr/r.dr);
 if(mc>mr)
 return 1;
 else if(mc<mr)
 return 0;
 else
 return 2;
}
complex::~complex(void)
{
 cout<<"iam in destructor of cc"<<endl;
 getch();
}
rational::~rational(void)
{
 cout<<"iam in destructor of rc"<<endl;
 getch();
}
void main(void)
{
 clrscr();
 complex c;
 rational r;
 cout<<"c=";
 c.setvalues();
 cout<<"c=";
 cout<<c.getvalues(0)<<"+"<<c.getvalues(1)<<"i"<<endl;
 cout<<"r=";
 r.setvalues();
 cout<<"r="<<r.getvalues(0)<<"/"<<r.getvalues(1)<<endl;
 int k=comp(c,r);
 if(k==1)
 cout<<"c>r"<<endl;
 else if(k==0)
 cout<<"c<r"<<endl;
 else
 cout<<"c=r"<<endl;
 getch();
}
