#include <iostream.h>
#include <conio.h>
template <class T>
T getbig(T a,T b,T c)
{
 T ans;
 ans=((a>=b)?((a>=c)?a:c)
	   :((b>=c)?b:c));
 return ans;
}
void main(void)
{
 clrscr();
 int x,y,z;
 cout<<"enter 3 integers=";
 cin>>x>>y>>z;
 int b1;
 b1=getbig(x,y,z);
 cout<<"big="<<b1<<endl;
 float p,q,r;
 cout<<"enter 3 floating numbers=";
 cin>>p>>q>>r;
 float b2=getbig(p,q,r);
 cout<<"big="<<b2<<endl;
 char a,b,c;
 cout<<"enter 3 characters=";
 cin>>a>>b>>c;
 char b3=getbig(a,b,c);
 cout<<"big="<<b3<<endl;
 getch();
}
