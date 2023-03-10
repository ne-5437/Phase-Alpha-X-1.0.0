#include <iostream.h>
#include <conio.h>
void main(void)
 {
  int i,p,n;
  clrscr();
  cout<<"Enter n= ";
  cin>>n;
  i=2;
  do
   {
    if(n%i==0)
     break;
    i++;
   }while(i<n);
  if(i==n)
   cout<<"It is a Prime No";
  else
   cout<<"It is not a Prime No";
   getch();
 }