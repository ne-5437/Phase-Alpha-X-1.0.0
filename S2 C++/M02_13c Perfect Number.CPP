#include <iostream.h>
#include <conio.h>

void main(void)
 {
  int i,n,backup,sum;
  clrscr();
  cout<<"Enter n= ";
  cin>>n;
  sum=0;
  i=1;
  while(i<n)
   {
    if(n%i==0)
     sum=sum+i;
    i++;
   }
  if(sum==n)
   cout<<"It is a Perfect No";
  else
   cout<<"It is not a Perfect No";
  getch();
 }