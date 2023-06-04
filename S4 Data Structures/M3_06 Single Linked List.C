#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
 int x;
 struct node *next;
}node;

node *head=NULL;

void createhead();
void addnode();
void display();
void insertnode();
void delete();
void deletelast();
void addfirst();
void order();
void search();

void search()
{
 int val,i=0;
 node *p;
 printf("\nenter value to search=");
 scanf("%d",&val);
 for(p=head;p!=NULL;p=p->next)
 {
  i=i+1;
  if(p->x==val)
    printf("value is found at %d",i);
 }
}

void order()
{
 int temp;
 node *p,*q;
 for(p=head;p!=NULL;p=p->next)
 {
  for(q=p->next;q!=NULL;q=q->next)
  {
   if(p->x>q->x)
   {
    temp=p->x;
    p->x=q->x;
    q->x=temp;
   }
  }
 }
}
void deletelast()
{
 node *p=head;
 while(p->next->next!=NULL)
 {
  p=p->next;
 }
 p->next=NULL;
}

void addfirst()
{
 int data;
 node *temp=NULL;
 temp=(node*)malloc(sizeof(node));
 printf("\nenter new head=");
 scanf("%d",&data);
 temp->next=head;
 temp->x=data;
 head=temp;
}

void createhead(void)
{
 node *temp=NULL;
 temp=(node*)malloc(sizeof(node));
 if(head==NULL)
 {
  printf("\nenter head=");
  scanf("%d",&(temp->x));
  temp->next=NULL;
  head=temp;
 }
 else
 printf("\nhead exists");
}

void addnode()
{
 node *temp=NULL;
 node *p=head;
 temp=(node*)malloc(sizeof(node));
 printf("enter node=");
 scanf("%d",&(temp->x));
 while(p->next!=NULL)
 {
  p=p->next;
 }
 p->next=temp;
 temp->next=NULL;
}

void display()
{
 node *p=head;
 while(p!=NULL)
 {
  printf("%d",p->x);
  printf("->");
  p=p->next;
 }
}
void insertnode()
{
 int n,i=0,data;
 node *p=head;
 node *temp=NULL;
 temp=(node*)malloc(sizeof(node));
 printf("\nenter n=");
 scanf("%d",&n);
 printf("\nenter node=");
 scanf("%d",&data);
 while(i<n-2)
 {
   p=p->next;
   i++;
 }
 temp->x=data;
 temp->next=p->next;
 p->next=temp;
}

void delete()
{
 int n,i=1;
 node *p=head;
 printf("\nenter n=");
 scanf("%d",&n);
 while(i<n-1)
 {
  p=p->next;
  i++;
 }
 p->next=p->next->next;
}

void main(void)
{
  int ch;
  clrscr();
  while(1)
 {
  printf("\n1.create head 2.add anode 3.display 4.exit 5.insert 6.delete 7.deletelast 8.addfirst 9.order 10.search");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	  createhead();
	  break;
   case 2:
	  addnode();
	  break;
   case 3:
	  display();
	  break;
   case 4:
	  exit(0);
   case 5:
	  insertnode();
	  break;
   case 6:
	  delete();
	  break;
   case 7:
	  deletelast();
	  break;
   case 8:
	  addfirst();
	  break;
   case 9:
	  order();
	  break;
   case 10:
	  search();
	  break;
  }
 }
}