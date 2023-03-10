#include <iostream.h>
#include <conio.h>
void main(void)
 {
  clrscr();
  int a,b,c;
  cout<<"Enter any 2 Numbers ";
  cin>>a>>b;
  c=a+b;
  cout<<"Sum="<<c<<endl;
  c=a-b;
  cout<<"Diff="<<c<<endl;
  c=a*b;
  cout<<"Mul="<<c<<endl;
  c=a/b;
  cout<<"Div"<<c<<endl;
  c=a%b;
  cout<<"Mod"<<c<<endl;
  getch();
 }