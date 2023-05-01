/*Write a C program to display the numbers from 1 to ‘n’; and, from
‘n’ to 1 using recursion. */
#include <stdio.h>
#include <conio.h>
int display(int);

int display(int k)
{
	return k;
}

int main(int)
{
	int n,ans,i;
	printf("Enter n=");
	scanf("%d",&n);
  for(i=1;i<=n;i++) 
   {
   	ans=display(i);
    printf("%4d",ans);
   } 
  for(i=n;i>=1;i--) 
   {
   	ans=display(i);
    printf("%4d",ans);
   } 
  getch();
} 