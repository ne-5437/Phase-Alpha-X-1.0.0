#include <iostream.h>
#include <conio.h>

void main(void)
 {
  int r,i,n,backup,sum,cub,j;
  clrscr();
  cout<<"Enter n= ";
  cin>>n;
  backup=n;
  sum=0;
  for( ;n!=0; )
   {
    r=n%10;
    cub=1;
    for(j=1;j<=r;j++)
     {
      cub=r*r*r;
     }
    sum=sum+cub;
    n=n/10;
   }
   if(backup==sum)
     cout<<"It is Armstrong No";
    else
      cout<<"It is not a Armstrong No";
  getch();
 }