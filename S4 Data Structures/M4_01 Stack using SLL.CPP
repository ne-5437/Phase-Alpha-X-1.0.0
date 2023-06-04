//module4-program1
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node *top;
void push(int);
void display();
void pop();
void push(int x)
{
struct node* newnode;
newnode=(node*)malloc(sizeof(node));
newnode->data=x;
newnode->next=top;
top=newnode;
}
void display()
{
struct node* temp;
temp=top;
if(top==NULL)
{
printf("no data");
}
while(temp!=NULL)
{
printf("%d->",top->data);
temp=temp->next;
}

}
void pop()
{
struct node* temp;
temp=top;
if(top==NULL)
{
printf("underflow");
}
else
{
printf("%d",top->data);
top=top->next;
free(temp);
}
}
void main(void)
{

int ch,ele;
clrscr();
while(1)
{
printf("1.push\n2.display\n3.pop\n4exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enetr the element to be pushed");
scanf("%d",&ele);
push(ele);
break;
case 2:
display();
break;
case 3:
pop();
break;
case 4:
exit(0);
break;
}
}


getch();
}
 



