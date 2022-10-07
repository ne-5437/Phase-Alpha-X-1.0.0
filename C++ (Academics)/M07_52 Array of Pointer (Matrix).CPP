#include <iostream.h>
#include <conio.h>
void main(void)
{
 int **A=NULL;
 int m,n,i,j;
 clrscr();
 A=new int *;
 cout<<"enter m,n=";
 cin>>m>>n;
 for(i=0;i<m;i++)
 A[i]=new int [n];
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cout<<"A["<<i<<"]["<<j<<"]=";
   cin>>A[i][j];
  }
 }
 cout<<"A="<<endl;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
   cout<<A[i][j]<<" ";
   cout<<"\n";
  }
 for(i=0;i<m;i++)
 delete []A[i];
 delete []A;
 getch();
}
