\\module4-program2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int);
void dequeue();
void dispaly();
void enqueue(int x)
{
struct node* newnode;
newnode=(node*)malloc(sizeof(node));
newnode->data=x;
newnode->next=NULL;
if(front==0&&rear==0)
{
front=rear=newnode;
}
else
{
rear->next=newnode;
rear=newnode;
}
}
void display()
{
struct node* temp;
if(rear==0&&front==0)
{
printf("emptyy");
}
temp=front;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
void dequeue()
{
struct node* temp;
temp=front;
if(front==0&&rear==0)
{
printf("underflow");
}
printf("%d",front->data);
front=front->next;
free(temp);
}
void main(void)
{
int ch,ele;
clrscr();
while(1)
{
printf("1.enqueue\n 2 display\n3.dequeue\n4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enetr the element to be enqueued");
scanf("%d",&ele);
enqueue(ele);
break;
case 2:
display();
break;
case 3:
dequeue();
break;
case 4:
exit(0);
break;
}
}
getch();
}
 
