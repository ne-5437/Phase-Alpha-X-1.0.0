#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct
 {
  int data;
  struct node *prev;
  struct node *next;
 }node;

node *top=NULL;

void cre(int);
void cre(int k)
 {
  top=(node*)malloc(sizeof(node));
  top->data=k;
  top->prev=NULL;
  top->next=top;
 }

void insert(int);
void insert(int k)
 {
  node*temp;
  node*New;
  New=(node*)malloc(sizeof(node));
  for(temp=top;temp->next!=top;temp=temp->next);
  New->data=k;
  temp->next=New;
  New->prev=temp;
  New->next=top;
  top->prev=New;
 }

void del(void);
void del(void)
 {
  node*temp=top;
  node*t;
  if(top->prev==NULL&&top->next==NULL);
   {
    printf("queue is empty");
   }
  else
  {
   printf("\nDeleted-%d",temp->data);
   top=temp->next;
   top->prev=temp->prev;
   t=temp->prev;
   t->next=top;
   temp->next=NULL;
   temp->prev=NULL;
  }
 }

void display(void);
void display(void)
 {
  node*temp=top;
  printf("\n%d",temp->data);
  for(temp=top->next;temp->next!=top->next;temp=temp->next)
    printf("\n%d",temp->data);
 }

void main(void)
 {
  int ch,k;
  clrscr();
  while(1)
   {
    printf("\nEnter:1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit");
    scanf("%d",&ch);
    switch(ch)
     {
      case 1:printf("\nEnter-");
	     scanf("%d",&k);
	     cre(k);
	     break;

      case 2:printf("\nEnter-");
	     scanf("%d",&k);
	     insert(k);
	     break;

      case 3:del();
	     break;

      case 4:display();
	     break;

      case 5:printf("\nExit!");
	     exit(0);

      default:printf("\nWrong input");
	      break;
     }
   }
 }
