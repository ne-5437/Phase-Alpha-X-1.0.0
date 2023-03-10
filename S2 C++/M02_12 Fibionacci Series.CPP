#include <iostream.h>
#include <conio.h>
void main(void)
 {
  int i,n,f,s,fib;
  clrscr();
  cout<<"Enter n= ";
  cin>>n;
  f=1;
  s=1;
  i=1;
  cout<<"1 1";
  do
   {
    fib=f+s;
    f=s;
    s=fib;
    cout<<" "<<fib;
    i++;
   }while(i<n);
   getch();
 }