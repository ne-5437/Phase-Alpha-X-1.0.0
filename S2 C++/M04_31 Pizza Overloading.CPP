#include <iostream.h>
#include <conio.h>
#define PI 22.0/7
float docost(float,float,float);
float docost(float,float,float,float);
float docost(float h1,float d1,float p1)
{
  float a=PI*(d1/2)*(d1/2)*h1;
  return(p1/a);
}
float docost(float l,float b,float h2,float p2)
{
 return(p2/(l*b*h2));
}
void main(void)
{
 float h1,h2,d1,b,l,p1,p2;
 clrscr();
 cout<<"for circular pizza"<<endl;
 cout<<"enter h1,d1=";
 cin>>h1>>d1;
 cout<<"for rectangular pizza"<<endl;
 cout<<"enter h2,b,l=";
 cin>>h2>>b>>l;
 cout<<"enter p1=";
 cin>>p1;
 cout<<"enter p2=";
 cin>>p2;
 float c1=docost(h1,d1,p1);
 float c2=docost(l,b,h2,p2);
 if(c1<c2)
 cout<<"buy circular pizza"<<endl;
 else if(c2<c1)
 cout<<"buy rectangular pizza"<<endl;
 else if(c1==c2)
 cout<<"buy anything!both are same cost"<<endl;
 getch();
}