#include <iostream.h>
#include <conio.h>

void main(void)
 {
  int r,i,n,backup,sum,fact,j;
  clrscr();
  cout<<"Enter n= ";
  cin>>n;
  backup=n;
  sum=0;
  for( ;n!=0; )
   {
    r=n%10;
    fact=1;
    for(j=1;j<=r;j++)
     {
      fact=fact*j;
     }
    sum=sum+fact;
    n=n/10;
   }
   if(backup==sum)
     cout<<"It is Strong No";
    else
      cout<<"It is not a Strong No";
  getch();
 }