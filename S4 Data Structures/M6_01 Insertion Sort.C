#include <stdio.h>
#include <conio.h>
void insertion(int *,int);
void insertion(int *A,int n)
{
  int i,j,key;
  for(i=1;i<n;i++)
  {
   key=A[i];
   j=i-1;
  while(key<A[j]&&j>=0)
  {
   A[j+1]=A[j];
   j--;
  }
  A[j+1]=key;
 }
}

void main(void)
{
 int A[10],n,i;
 printf("\nenter n=");
 scanf("%d",&n);
 printf("\nenter data=");
 for(i=0;i<n;i++)
 {
  scanf("%d",&A[i]);
 }
 insertion(A,n);
 printf("\nsorted data");
 for(i=0;i<n;i++)
 printf("%d",A[i]);
 getch();
}