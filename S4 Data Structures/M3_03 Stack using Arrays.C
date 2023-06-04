#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

/*typedef struct
{
 int key;
}element;*/

/*element stack[MAX];
int top=-1;*/

int push(int);
int pop();
void display(void);
void terminate(void);
int top=-1;
int stack[MAX];

int push(int x)
{
 if(top>=MAX)
  return -1;
 top++;
 stack[top]=x;
 return 1;
}

int pop(void)
{
 int x;
 if(top<0)
  return -1;
 x=stack[top];
 top--;
 return x;
}
void display()
{
 int i;
 for(i=0;i<=top;i++)
 printf("%d ",stack[i]);
}

void terminate(void)
{
 printf("\nstack is terminated");
 exit(0);
}
void main(void)
{
 int ch,x,a;
 clrscr();
 while(1)
 {
  printf("\n1.push 2.pop 3.display 4.exit");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	  printf("\nenter data=");
	  scanf("%d",&x);
	  if(push(x)==1)
	   printf("\n PUSHED!");
	  else
	   printf("\n Stack Overflow ERROR!");
	  break;
   case 2:
	  a=pop();
	  printf("\npopped=%d",a);
	  break;
   case 3:
	  display();
	  break;
   case 4:
	 terminate();
   default:
	  printf("\nenter valid choice");
  }
 }
 getch();
}
