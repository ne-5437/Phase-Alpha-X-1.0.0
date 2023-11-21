#include <iostream>
using namespace std;

int main() {
	int t,max;
	cin>>t;
	while(t--){
	    int n,m,count=0,c1=1,total=0;
	    max=0;
	    scanf("%d %d",&n,&m);
	    string a;
	    cin>>a;
	    for(int i=0;i<30;i++)
	    {
	        if(a[i]=='1')
	        {
	            count=count+1;
	            if((a[i]=='1') && (a[i+1]=='1'))
	            {
	                c1+=1;
	            }
	            if(c1>max)
	            {
	                max=c1;
	            }
	            else if((a[i]=='1') && (a[i+1]=='0'))
	            {
	                c1=1;
	            }        
	        }
	        }
	        total=(count*n)+(max*m);
	        cout<<total<<endl;
	}
	return 0;
}