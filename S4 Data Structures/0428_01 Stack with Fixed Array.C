#include<stdio.h>

int stack[100],choice,n,top,x,i;

void push(void);
void push()
{
 if(top>=n-1)
 {
 printf("\n stack overflow");
 }
 else
 {
 printf(" enter value to be pushed-");
 scanf("%d",&x);
 top++;
 stack[top]=x;
 }
}

void pop(void);
void pop()
{
if(top<=-1)
 {
 printf("\n stack underflow");
 }
 else
 {
 printf("popped element is %d",stack[top]);
 top--;
 }
}

void display(void);
void display()
{
 if(top>=0)
 {
  for(i=top;i>=0;i--)
     printf("%d ",stack[i]);
 }
 else
 {
  printf("\n the stack is empty");
 }
}

int main()
{
 top=-1;
 printf("\n enter the size of array-");
 scanf("%d",&n);
 printf("\n 1.push\n2.pop\n3.display\n4.exit");
 do
 {
  printf("\n enter the choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
      {
       push();
       break;
      }
   case 2:
      {
       pop();
       break;
      }
   case 3:
     {
      display();
      break;
     }
   case 4:
    {
     printf("exit");
     break;
    }
   default:
    {
     printf("enter valid choice");
    }
  }
 }
 while(choice!=4);
 return 0;
}












