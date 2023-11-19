#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int v[n + 1] = {0};
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        v[val]=1;
    }
    for(int i=0;i<=n;i++){
        if(!v[i])
           cout<<i<<" ";
    }
 return 0;
}