#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	
	
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    long arr[n];
	    
	   for(int j=0;j<n;j++)
	   {
	      cin>>arr[j]; 
	   }
	    long sum=arr[0];
	    
	   for(int j=1;j<n;j++)
	   {
	       if(arr[j]>arr[j-1])
	        sum+=arr[j]-arr[j-1];
	   }
	   cout<<sum<<endl;
	   
	}
	return 0;
}
