#include <stdio.h>
#include <conio.h>
#define MAX 10

int Q[MAX];
int rear=-1;
int front=-1;

int enqueue(int);
int dequeue(void);
void display(void);
void terminate(void);

int enqueue(int x)
{
 if(rear==-1&&front==-1)
 {
  rear=0;
  front=0;
  Q[rear]=x;
 }
 else if((rear+1)%MAX==front)
 return -1;
 else
 {
  rear=(rear+1)%MAX;
  Q[rear]=x;
  return 1;
 }
}

int dequeue(void)
{
 int t;
 if(front==-1&&rear==-1)
 return -1;
 t=Q[front];
 front=(front+1)%MAX;
 return t;
}

void display(void)
{
 int i=front;
 while(i<=rear){
 printf("%d ",Q[i]);
 i=(i+1)%MAX;
}
}
void terminate(void)
{
 exit(0);
}

void main(void)
{
  int ch,x,a;
  while(1)
  {
   printf("\n1.enqueue 2.dequeue 3.display 4.exit");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
	   printf("\nenter data=");
	   scanf("%d",&x);
	   if(enqueue(x)==1)
	   printf("\nenqueued");
	   else
	   printf("\nqueue is full");
	   break;
    case 2:
	   a=dequeue();
	   if(a==-1)
	   printf("\nempty");
	   printf("\ndequeued=%d",a);
	   break;
   case 3:
	  display();
	  break;
   case 4:
	  terminate();
	  break;
   default:
	  printf("\ninvalid choice");
	  break;
  }
 }
 getch();
}