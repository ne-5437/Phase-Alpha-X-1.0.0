#include <iostream.h>
#include <conio.h>

void main(void)
 {
  int i,j,k,n;
  clrscr();
  cout<<"Enter n= ";
  cin>>n;
  k=1;
  for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
     {
      cout<<k<<" ";
      k++;
     }
    cout<<endl;
   }
  getch();
 }