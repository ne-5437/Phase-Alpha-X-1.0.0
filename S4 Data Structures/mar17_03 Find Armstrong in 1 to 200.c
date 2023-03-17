#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int n,sum,r,i;
	for(i=1;i<=200;i++)
	{
	n=i;
	sum=0;	
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==i)
	 printf("\n %d",i);
   }
	  return 0;
 }
