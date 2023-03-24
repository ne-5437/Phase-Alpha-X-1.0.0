#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n;
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	printf("enter a number from 1 to 10: ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
	 if(A[i]==n)
	  printf("Found the number");	
	}
	return 0;
}
