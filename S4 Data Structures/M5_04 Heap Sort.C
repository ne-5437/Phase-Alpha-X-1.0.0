#include <stdio.h>
#include <conio.h>
int size=0;
void swap(int *a,int *b)
{
 int temp=*b;
 *b=*a;
 *a=temp;
}

void heapify(int array[],int size,int i)
{
 if(size==1)
 {
  printf("\nsingle element in the heap");
 }
 else
 {
  int largest=i;
  int l=2*i+1;
  int r=2*i+2;
  if(l<size&&array[l]>array[largest])
  largest=l;
  if(r<size&&array[r]>array[largest])
  largest=r;
  if(largest!=i)
  {
   swap(&array[i],&array[largest]);
   heapify(array,size,largest);
  }
  }
 }
 void insert(int array[],int newnum)
 {
  int i;
  if(size==0)
  {
   array[0]=newnum;
   size+=1;
  }
  else
  {
   array[size]=newnum;
   size+=1;
   for(i=size/2-1;i>=0;i--)
   {
    heapify(array,size,i);
    }
    }
   }
   void deleteroot(int array[],int num)
   {
   int i;
   for(i=0;i<size;i++)
   {
    if(num==array[i])
    break;
   }
   swap(&array[i],&array[size-1]);
   size-=1;
   for(i=size/2-1;i>=0;i--)
   {
    heapify(array,size,i);
   }
  }
  void printarray(int array[],int size)
  {
   int i;
   for(i=0;i<size;i++)
   printf("%d",array[i]);
   printf("\n");
  }
  void main(void)
  {
   int array[10];
   insert(array,3);
   insert(array,4);
    insert(array,9);
    insert(array,5);
     insert(array,2);
     printf("\nmax heap");
     printarray(array,size);
     deleteroot(array,4);
     printf("\nafter deleting");
     printarray(array,size);;
     getch();
	 }



