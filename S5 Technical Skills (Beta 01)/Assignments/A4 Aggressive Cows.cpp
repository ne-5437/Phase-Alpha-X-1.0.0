#include <iostream>

using namespace std;
int maxdiff(int *,int * ,int ,int);
int maxdiff(int *a,int * b,int k,int n)
{
    int p;
    p=a[k];
    int max=0;
    int h=-1;
    int diff;
    
    for( int i=0;i<n;i++)
    {
        if(b[i]!=1)
        {
            if(a[i]>p)
            diff=a[i]-p;
            else
            diff=p-a[i];
            if(diff>max)
            {
                max=diff;
                h=i;
            }
        }
    }
    return h;
}

int main()
{
  
  int n,k;
  cin>>n;
  cin>>k;
  int b=0;
  int max=0;
  int a[n];
  int t[n];
  int count=1;
  for(int i=0;i<n;i++)
  {
      cin>>a[n];
      t[n]=0;
  }
  t[0]=1;
  for(int i=0;i<k-1;i++)
  {
    b=maxdiff(a,t,b,n) ;
    t[b]=1;
  }
  for(int i=0;i<n;i++)
  {
      if(t[i]==1)
      count++;
      else
      count=1;
      if(count>max)
      max=count;
  }
  cout<<max<<"\n";

    return 0;
}