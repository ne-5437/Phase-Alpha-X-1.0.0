module4-program3
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
struct node* pre;
};
struct node* tail;
struct node* head;
void printreverse();
void deletehead();
void printfront();
void createhead(int);
void addatlast(int);
void insertatpos(int,int);
void deleteat(int);

void createhead(int x)
{
struct node* temp;
temp=(node*)malloc(sizeof(node));
temp->data=x;
temp->next=NULL;
temp->pre=NULL;
head=temp;
}
void addatlast(int x)
{
struct node* temp;
struct node* newnode;
newnode=(node*)malloc(sizeof(node));
for(temp=head;temp->next!=NULL;temp=temp->next)
{
newnode=(node*)malloc(sizeof(node));
newnode->data=x;
newnode->next=NULL;
newnode->pre=temp;
temp->next=newnode;
}
}
void insertatpos(int x,int k)
{
int i;
struct node* temp;
struct node* newnode;
temp=head;
newnode=(node*)malloc(sizeof(node));
for(i=1;i<k;i++)
{
temp=temp->next;
}
newnode=(node*)malloc(sizeof(node));
newnode->data=x;
newnode->next=temp->next;
newnode->pre=temp;
temp->next=newnode;
}
void deleteat(int k)
{
struct node* temp;
struct node* temp1;
if(k==0)
deletehead();
else
{
temp=head;
int i;
for(i=1;i<k;i++)
temp=temp->next;
if(temp->next->next==NULL)
temp->next=NULL;
else
{
temp1=temp->pre;
temp1->next=temp->next;
temp->next->pre=temp1;
free(temp);
}
}
}
void deletehead()
{

struct node* temp1=(struct node*)malloc(sizeof(struct node));
temp1=head;
temp1=head->next;
temp1->pre=NULL;
head=temp1;
free(temp1);
}
void printfront()
{
struct node* temp=NULL;
temp=head;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
void printreverse()
{
struct node* current ;
struct node* nextnode;
current=head;
while(current!=NULL)
{
nextnode=current->next;
current->next=current->pre;
current->pre=nextnode;
current=nextnode;
}
current=head;
head=tail;
tail=current;
}
void main(void)
{
int k,n,ch;
clrscr();
while(1)
{
printf("1.craetehead\n2.add a node\n3insertnode\n4deletenode\n5printfirst\n6printreverse\n7delete\n8exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enetr the value of head");
scanf("%d",&k);
createhead(k);
break;
case 2:
printf("enetr the value to be added at lat");
scanf("%d",&k);
addatlast(k);
break;
case 3:
printf("enetr the position");
scanf("%d",&k);
printf("enetr the value");
scanf("%d",&n);
insertatpos(n,k);
break;
case 5:
printfront();
break;
case 6:
printreverse();
break;
case 7:
printf("enter pos to delete:");
scanf("%d",&k);
deleteat(k);
break;
case 8:
exit(0);
break;
}
}
getch();
}


