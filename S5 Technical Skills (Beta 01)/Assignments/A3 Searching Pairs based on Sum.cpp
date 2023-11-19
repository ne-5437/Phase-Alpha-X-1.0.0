#include <iostream>

using namespace std;
int binsearch(int *,int,int);
int binsearch(int *a,int q,int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high-low)/2;

        if (a[mid] == q) 
            return 1;
        else if (a[mid] < q)
            low = mid + 1;
        else 
            high = mid - 1;
    }
return 0;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    int p,q;
    int y=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>p;
    for(int i=0;i<n;i++)
    {
      q=p-a[i];
      y=binsearch(a,q,n);
      if(y==1){
          printf("\n the pair exists");
          break;
      }
    }
    if(y==0)
    printf("\n does not exist");

    return 0;
}