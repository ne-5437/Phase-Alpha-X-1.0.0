#include <iostream.h>
#include <conio.h>
void main(void)
 {
  clrscr();
  int a,b,c,ans;
  cout<<"Enter any 3 Numbers ";
  cin>>a>>b>>c;
  if(a>=b)
   {
    if(a>=c)
     ans=a;
    else
     ans=c;
   }
  else
   {
    if(b>=c)
     ans=b;
    else
     ans=c;
   }
  cout<<"Biggest="<<ans;
  getch();
 }