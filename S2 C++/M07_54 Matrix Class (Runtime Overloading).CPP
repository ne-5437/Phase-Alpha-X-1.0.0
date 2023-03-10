#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
class matrix
{
 private:
 int **M;
 int r;
 int c;
 public:
 int getr()
 {
  return r;
 }
 int getc()
 {
  return c;
 }
 matrix(void);
 matrix(int,int);
 friend istream & operator>>(istream &,const matrix &);
 friend ostream & operator<<(ostream &,const matrix &);
 matrix operator+(const matrix &);
 friend matrix operator*(const matrix &,const matrix &);
 friend void operator++(const matrix &);
 void operator--();
};
matrix::matrix(void)
{
 cout<<"enter r,c=";
 cin>>r>>c;
 M=new int *;
 for(int i=0;i<r;i++)
 {
  M[i]=new int [c];
 for(int j=0;j<c;j++)
 M[i][j]=0;
}
}


matrix::matrix(int a,int b)
{
 r=a;
 c=b;
 M=new int *;
 for(int i=0;i<r;i++)
 {
  M[i]=new int [c];
 for(int j=0;j<c;j++)
 M[i][j]=0;
 }
 }
istream & operator>>(istream &in,const matrix &T)
{
 int i,j;
 for(i=0;i<T.r;i++)
 {
  for(j=0;j<T.c;j++)
  {
   cout<<"T["<<i<<"]["<<j<<"]=";
   in>>T.M[i][j];
  }
 }
 return in;
}
ostream & operator<<(ostream &out,const matrix &T)
{
 int i,j;
 for(i=0;i<T.r;i++)
 {
  for(j=0;j<T.c;j++)
  out<<T.M[i][j]<<" ";
  cout<<"\n";
 }
 return out;
}
matrix matrix::operator+(const matrix &T)
{
 matrix S(r,T.c);
 for(int i=0;i<T.r;i++)
 {
  for(int j=0;j<T.c;j++)
  S.M[i][j]=this->M[i][j]+T.M[i][j];
 }
 return S;
}
matrix operator*(const matrix &A,const matrix &B)
{
 matrix S(A.r,B.c);
 S.r=A.r;
 S.c=B.c;
 int sum;
 for(int i=0;i<A.r;i++)
 {
  for(int j=0;j<B.c;j++)
  {
   sum=0;
   for(int k=0;k<A.c;k++)
   {
    sum+=A.M[i][k]*B.M[k][j];
   }
   S.M[i][j]=sum;
  }
 }
 return S;
}
void matrix::operator--()
{
 for(int i=0;i<this->r;i++)
 {
  for(int j=0;j<this->c;j++)
  {
   this->M[i][j]--;
  }
 }
}
void operator++(const matrix &T)
{
 for(int i=0;i<T.r;i++)
 {
  for(int j=0;j<T.c;j++)
  {
   T.M[i][j]++;
  }
 }
}

void main(void)
{
 clrscr();
 matrix A;
 matrix B;
 cout<<"A=";
 cin>>A;
 cout<<"A="<<endl;
 cout<<A;
 cout<<"B=";
 cin>>B;
 cout<<"B="<<endl;
 cout<<B;
 matrix add(A.getr(),A.getc());
 add=A+B;
 cout<<"add="<<endl;
 cout<<add;
 matrix mul(A.getr(),B.getc());
 mul=A*B;
 cout<<"mul="<<endl;
 cout<<mul;
 cout<<"incremented A"<<endl;
 ++A;
 cout<<A;
 ++B;
 cout<<"incremented B"<<endl;
 cout<<B;
 --A;
 cout<<"decremented A"<<endl;
 cout<<A;
 cout<<"decremented B"<<endl;
 --B;
 cout<<B;
 getch();
}