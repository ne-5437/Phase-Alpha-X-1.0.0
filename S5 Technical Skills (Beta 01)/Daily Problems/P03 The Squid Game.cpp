#include <iostream>
using namespace std;
#include<climits>

int main() {
		int t;
	cin>>t;
	while(t--)
	{
	    int n,minprice,totalprice;
	    cin>>n;
	    int sum=0;
	    int A1[n];
	     minprice=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        cin>>A1[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        sum+=A1[i];
	        minprice=min(A1[i],minprice);
	    }
	    
	    totalprice=sum-minprice;
	    cout<<totalprice<<endl;
	    
	}

	return 0;
}
