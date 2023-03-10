#include <iostream.h>
#include <conio.h>
#define PI 22.0/7
void main(void)
{
 int i,n,p;
 clrscr();
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout<<"enter precision=";
 cin>>p;
 cout.precision(p);
 float x,nr,dr,sum;
 cout<<"enter x=";
 cin>>x;
 x*=PI/180.0;
 cout<<"enter n=";
 cin>>n;
 sum=x;
 nr=x;
 dr=1.0;
 int pwr=1;
 int sign=1;
 for(i=2;i<=n;i++)
 {
  nr=nr*x*x;
  dr=dr*(pwr+1)*(pwr+2);
  sign=sign*(-1);
  sum+=sign*(nr/dr);
  pwr+=2;
 }
 cout<<"sin("<<x<<")="<<sum<<endl;
 getch();
}