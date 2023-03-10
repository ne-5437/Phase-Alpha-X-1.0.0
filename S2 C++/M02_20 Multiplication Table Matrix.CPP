#include <iostream.h>
#include <conio.h>
void main(void)
{
 int i,j,n;
 clrscr();
 cout<<"enter n=";
 cin>>n;
 cout<<"  ";
 for(i=1;i<=n;i++)
 cout<<" "<<i;
 cout<<"\n";
 for(i=1;i<=n;i++)
 {
  cout<<" "<<i;
  for(j=1;j<=n;j++)
   cout<<" "<<i*j;
   cout<<"\n";
 }
 getch();
}