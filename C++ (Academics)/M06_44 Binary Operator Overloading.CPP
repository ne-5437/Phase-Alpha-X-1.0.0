#include <iostream.h>
#include <conio.h>
class complex
{
 private:
	 int real;
	 int img;
 public:
	void setvalues();
	int getvalues(int);
	complex operator+(const complex &);
	complex operator*(const complex &);
	void operator++(void);
	void operator--(void);
};
complex complex::operator+(const complex &c)
{
 complex ans;
 ans.real=real+c.real;
 ans.img=img+c.img;
 return ans;
}
complex complex::operator*(const complex &c)
{
 complex ans;
 ans.real=(real*c.real)-(img*c.img);
 ans.img=(real*c.img)+(img*c.real);
 return ans;
}
void complex::operator++(void)
{
 this->real++;
 this->img++;
}
void complex::operator--(void)
{
 real--;
 img--;
}

void complex::setvalues()
{
 cout<<"real=";
 cin>>real;
 cout<<"img=";
 cin>>img;
}
int complex::getvalues(int flag)
{
 if(flag==0)
  return real;
 else
  return img;
}
void main(void)
{
 clrscr();
 complex c1;
 complex c2;
 cout<<"c1=";
 c1.setvalues();
 cout<<"c1=";
 cout<<c1.getvalues(0)<<"+"<<c1.getvalues(1)<<"i"<<endl;

 cout<<"c2=";
 c2.setvalues();
 cout<<"c2=";
 cout<<c2.getvalues(0)<<"+"<<c2.getvalues(1)<<"i"<<endl;
 complex c3;
 c3=c1+c2;
 cout<<"c1+c2="<<c3.getvalues(0)<<"+"<<c3.getvalues(1)<<"i"<<endl;
 c3=c1*c2;
 cout<<"c1*c2="<<c3.getvalues(0)<<"+"<<c3.getvalues(1)<<"i"<<endl;
 ++c1;
 cout<<"Updated c1="<<c1.getvalues(0)<<"+"<<c1.getvalues(1)<<"i"<<endl;
 c2++;
 cout<<"Updated c2="<<c2.getvalues(0)<<"+"<<c2.getvalues(1)<<"i"<<endl;
 --c1;
 cout<<"Updated c1="<<c1.getvalues(0)<<"+"<<c1.getvalues(1)<<"i"<<endl;
 c2--;
 cout<<"Updated c2="<<c2.getvalues(0)<<"+"<<c2.getvalues(1)<<"i"<<endl;
 getch();
}