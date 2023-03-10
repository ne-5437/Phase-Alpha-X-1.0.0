#include <iostream.h>
#include <conio.h>

void main(void)
 {
  int r,i,n,backup,sum;
  clrscr();
  cout<<"Enter n= ";
  cin>>n;
  backup=n;
  sum=0;
  do
   {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
   }while(n!=0);
  if(sum==backup)
   cout<<"It is a Palindrome";
  else
   cout<<"It is not a Palindrome";
  getch();
 }