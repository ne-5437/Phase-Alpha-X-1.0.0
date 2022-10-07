#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
class sample
{
 int *S;
 int n;
public:
 sample(void);
 void setvalues();
 void getvalues();
 int getmax(void);
 void dosel(void);
 ~sample(void);
};
void sample::setvalues()
{
 for(int i=0;i<n;i++)
 {
  cout<<"S["<<i<<"]=";
  cin>>S[i];
 }
}
sample::sample(void)
{
 cout<<"enter n=";
 cin>>n;
 S=new int [n];
 if(S==NULL)
 {
  cout<<"no ram";
  getch();
  exit(0);
 }
}
void sample::getvalues(void)
{
 for(int i=0;i<n;i++)
 cout<<S[i];
}
int sample::getmax(void)
{
 int ans=0;
 for(int i=1;i<n;i++)
 {
  if(S[i]>S[ans])
  ans=i;
 }
 return ans;
}
void sample::dosel(void)
{
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   if(S[i]>S[j])
   {
    int temp=S[i];
    S[i]=S[j];
    S[j]=temp;
   }
  }
 }
}
sample::~sample(void)
{
 cout<<"iam in destructor"<<endl;
 getch();
}
void main(void)
{
  sample s1;
  cout<<"enter data="<<endl;
  s1.setvalues();
  cout<<"s1=";
  s1.getvalues();
  cout<<"max temp=";
  s1.getmax();
  cout<<"applying selection sort=";
  s1.dosel();
  s1.getvalues();
  delete []S;
  getch();
}