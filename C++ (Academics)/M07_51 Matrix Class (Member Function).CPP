#include <iostream.h>
#include <conio.h>
#define ROW 10
#define COL 10
class matrix
{
 private:
 int M[ROW][COL];
 int m;
 int n;
 public:
 matrix(void);
 void setvalues(void);
 void getvalues(void);
 matrix doadd(const matrix &);
 friend matrix domul(const matrix &,const matrix &);
}
matrix::matrix(void)
{
 m=0;
 n=0;
 for(int i=0;i<ROW;i++)
 {
  for(int j=0;j<COL;j++)
  {
   M[i][j]=0;
  }
 }
}
void matrix::setvalues()
{
 cout<<"enter m,n";
 cin>>m>>n;
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
   cout<<"M["<<i<<"]["<<j<<"]=";
   cin>>M[i][j];
  }
 }
}
void matrix::getvalues()
{
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
   cout<<M[i][j]<<" ";
   cout<<"\n";
 }
}
matrix matrix::doadd(const matrix &B)
{
 matrix T;
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
   T.M[i][j]=M[i][j]+B.M[i][j];
  }
 }
 return T;
}
matrix domul(const matrix &A,const matrix &B)
{
 matrix S;
 int sum;
 //T.m=A.m;
 //T.n=B.n;
 for(int i=0;i<A.m;i++)
 {
  for(int j=0;j<B.n;j++)
  {
   sum=0;
   for(int k=0;k<A.n;k++)
   {
    sum+=A.M[i][k]*B.M[k][j];
   }
   S.M[i][j]=sum;
  }
 }
 return S;
}
void main(void)
{
 clrscr();
 matrix A;
 cout<<"A=";
 A.setvalues();
 cout<<"A="<<endl;
 A.getvalues();
 matrix B;
 cout<<"B=";
 B.setvalues();
 cout<<"B="<<endl;
 B.getvalues();
 matrix add;
 add=A.doadd(B);
 cout<<"add="<<endl;
 add.getvalues();
 matrix mul;
 mul=domul(A,B);
 cout<<"mul="<<endl;
 mul.getvalues();
 getch();
}