#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

class rain
{
 private:
	 float *A;
	 int n;
 public:
	 rain(void);
	 void setvalues(void);
	 void getvalues();
	 void domean();
	 friend void dobub(rain &);
	 ~rain(void);
};
rain::rain(void)
{
 cout<<"enter n=";
 cin>>n;
 for(int i=0;i<n;i++)
 A=new float[n];
 if(A==NULL)
 {
  cout<<"no ram";
  getch();
  exit(0);
 }
}
void rain::setvalues()
{
 for(int i=0;i<n;i++)
 {
  cout<<"A["<<i<<"]=";
  cin>>A[i];
 }
}
void rain::getvalues()
{
 for(int i=0;i<n;i++)
  cout<<A[i]<<'\t';
}
void dobub(rain &r)
{
 for(int i=0;i<r.n;i++)
 {
  for(int j=0;j<r.n-i-1;j++)
  {
   if(r.A[j]>r.A[j+1])
   {
    float temp=r.A[j];
    r.A[j]=r.A[j+1];
    r.A[j+1]=temp;
   }
  }
 }
}
void rain::domean()
{
 float mean=0;
 for(int i=0;i<n;i++)
 {
  mean+=A[i];
 }
 mean=(float)mean/n;
 cout<<"mean="<<mean<<endl;
 float var;
 for(i=0;i<n;i++)
 {
  var=(A[i]-mean)*(A[i]-mean);
 }
 var/=n;
 float sd=sqrt(var);
 cout<<"standard deviation="<<sd<<endl;
}
rain::~rain(void)
{
 delete [ ]A;
 cout<<"DIS"<<endl;
 getch();
}
void main(void)
{
 rain r;
 r.setvalues();
 r.getvalues();
 dobub(r);
 r.getvalues();
 r.domean();
 getch();
}