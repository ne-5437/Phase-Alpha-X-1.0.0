#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int exp;
int coff;
struct node* next;
};
struct node* head;
struct node* new1;
void display();
void create();
void main(void)
{
int ch;
while(1)
{
printf("1.create\n2display\n 3exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
exit(0);
break;
}
}
getch();
}
void create()
{
char ch;
struct node* p1;
do
{
new1=(node*)malloc(sizeof(node));
printf("enetr coff exp");
scanf("%d%d",&new1->coff,&new1->exp);
new1->next=NULL;
if(head==NULL)
{
head=new1;
p1=new1;
}
else
{
p1->next=new1;
p1=new1;
}
printf("do you want one more term to the lsit");
scanf("%c",&ch);
}while(ch=='y');
}
void display()
{
struct node* p1;
p1=head;
while(p1!=NULL)
{
printf("%dx^%d",p1->coff,p1->exp);
p1=p1->next;
if(p1!=NULL)
printf("+");
}
 }