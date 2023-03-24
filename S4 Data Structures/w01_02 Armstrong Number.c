#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n,sum,backup,r;
	printf("Enter the number = ");
	scanf("%d",&n);
	backup=n;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==backup)
		printf("It is an armstrong number");
	else
	  printf("it is not an armstrong number");  
	  return 0;
}
