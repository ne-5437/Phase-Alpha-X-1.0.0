#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	char temp=0;
	char pw[10];
	printf("enter 4 digit pin:");
	while(i<4)
	{
	  temp=getch();
	  pw[i]=temp;
	  printf("*");
	  i++;
    }
	return 0;
}
