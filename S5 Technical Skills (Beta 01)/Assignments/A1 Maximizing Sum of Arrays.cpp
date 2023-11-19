#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int maxsum=0;
    int y=-1;
    int temp=0,temp2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
    
    for(int i=0;i<n-1;i++)
    {
        if((a[i]>=0) && (a[i+1]>=0))
        {
            if(i==0)
            maxsum=maxsum+a[i]+a[i+1];
            else
            maxsum=maxsum+a[i+1];
            
        }
        if(((a[i]>=0) && (a[i+1]<=0))||((a[i]<=0)&&(a[i+1]>=0)))
        {
            temp=a[i+1];
            temp2=(-1*a[i+1]);
            if(maxsum+temp2>maxsum+temp)
            {
                maxsum=maxsum+temp2;
                a[i]=-1*a[i];
                a[i+1]=-1*a[i+1];
            }
        }
        if((a[i]<=0)&&(a[i+1]<=0))
        {
           
            temp2=(-1*a[i+1]);
            
                maxsum=maxsum+temp2;
                a[i]=-1*a[i];
                a[i+1]=-1*a[i+1];
            
        
        }
    }
   cout<<maxsum;
    return 0;
}