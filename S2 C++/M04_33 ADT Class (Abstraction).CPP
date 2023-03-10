#include <iostream.h>
#include <conio.h>
class complex
{
 private:
 float real;
 float img;
 public:
 void setvalues();
 float getvalues(int);
};
void complex::setvalues()
{
 cout<<"real=";
 cin>>real;
 cout<<"img=";
 cin>>img;
}
float complex::getvalues(int flag)
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
 cout<<"c1="<<endl;
 c1.setvalues();
 cout<<"c1="<<c1.getvalues(0)<<"+"<<c1.getvalues(1)<<"i"<<endl;
 getch();
}