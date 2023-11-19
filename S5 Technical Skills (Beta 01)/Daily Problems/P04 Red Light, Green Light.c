#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",  &t);
	while(t--){
	    int n,m,shot=0;
    	scanf("%d %d",&n, &m);
    	int a[n];
    	for(int i = 0; i < n; i++){
    	    scanf("%d", &a[i]);
    	}
    	for(int i = 0; i < n; i++){
    	    if(a[i] > m){
    	        shot++;
    	    }
    	}
    	printf("%d\n",shot);
	}
	return 0;
}