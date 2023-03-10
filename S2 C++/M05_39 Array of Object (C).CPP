#include <iostream>
#define MAX 20
using namespace std;

class complex
 {
  private: int real;
	   int img;
  public: complex(void);
	  complex(int,int);
	  complex(const complex &);
	void setvalues(void);
	int getvalues(int);
	complex doAdd(const complex);
	friend complex doMul(const complex, const complex);
	  ~complex(void);
 };

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
//  getch();
 }
complex complex::doAdd(const complex c)
 {
  complex ans;
  ans.real=real+c.real;
  ans.img=img+c.img;
  return ans;
 }
complex doMul(const complex c1,const complex c2)
 {
  complex ans;
  ans.real=(c1.real*c2.real)-(c1.img*c2.img);
  ans.img=(c1.img*c2.real)+(c2.real*c1.img);
  return ans;
 }
int main(void)
 {
  complex c[MAX];
  int i,n;
  cout<<"Enter n=";
  cin>>n;
  for(i=0;i<n;i++)
   {
    cout<<"c["<<i<<"]=";
    c[i].setvalues();
   }
  for(i=0;i<n;i++)
   {
    cout<<"c["<<i<<"]="<<c[i].getvalues(0)<<"+"<<c[i].getvalues(1)<<"i"<<endl;
   }
  complex add,mul(1,1);
  for(i=0;i<n;i++)
   add=add.doAdd(c[i]);
  cout<<"Add="<<add.getvalues(0)<<"+"<<add.getvalues(1)<<"i"<<endl;
  for(i=0;i<n;i++)
   mul=doMul(mul,c[i]);
  cout<<"Mul="<<mul.getvalues(0)<<"+"<<mul.getvalues(1)<<"i"<<endl;

 }

