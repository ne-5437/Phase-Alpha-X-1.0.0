#include <iostream.h>
#include <conio.h>
class complex
{
 private: int *real;
	  int *img;
 public:
	  complex(void);
	  void setvalues(void);
	  int getvalues(int);
	  void update(void);
	  ~complex(void);
	  complex(const complex &);
 };
  complex::complex(void)
  {
  real=new int;;
  img=new int;
  *real=0;
  *img=0;
 }
 void complex::setvalues(void)
 {
 cout<<"enter real=";
 cin>>*real;
 cout<<"enter img=";
 cin>>*img;
 }
 int complex::getvalues(int flag)
 {
 if(flag==0)
 return *real;
 else
 return *img;
 }
 complex::complex(const complex &c)
 {
 real=new int;
 img=new int;
 cout<<"iam in cc"<<endl;
 *real=*(c.real);
 *img=*(c.img);
}
void complex::update(void)
{
*real=*real+1;
*img=*img+1;
}
complex::~complex(void)
{
cout<<"iam in destructor"<<endl;
delete real;
delete img;
getch();
}
 void main(void)
 {
 clrscr();
 complex c1;
 cout<"enter c1=";
 c1.setvalues();
 cout<<"c1="<<c1.getvalues(0)<<"+"<<c1.getvalues(1)<<"i"<<endl;
 complex c2;
 cout <<"enter c2=";
 c2.setvalues();
 cout<<"c2="<<c2.getvalues(0)<<"+"<<c2.getvalues(1)<<"i"<<endl;
 complex c3(c1);
 cout<<c3.getvalues(0)<<"+"<<c3.getvalues(1)<<"i"<<endl;
 c1.update();
 cout<<"c1="<<c1.getvalues(0)<<"+"<<c1.getvalues(1)<<"i";
 cout<<"c3="<<c3.getvalues(0)<<"+"<<c3.getvalues(1)<<"i";
 getch();
 }