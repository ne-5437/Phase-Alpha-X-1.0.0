#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
typedef struct node
{
 int x;
 node *pnext;
};

void main(void)
{
 node *head=NULL;
 clrscr();
 int ch;
 while(1)
 {
  cout<<"1.create head"
	"2.add a node"
	"3.display"
	"4.exit";
  cin>>ch;
 switch(ch)
 {
  case 1:
	 if(head!=NULL)
	 {
	  cout<<"head exists"<<endl;
	  break;
	 }
	 head=new node;
	 cout<<"enter head=";
	 cin>>head->x;
	 head->pnext=NULL;
	 cout<<"head is created"<<endl;
	 break;
  case 2:
	 for(node *p=head;p->pnext!=NULL;p=p->pnext);
	 node *temp=NULL;
	 temp=new node;
	 p->pnext=temp;
	 cout<<"enter temp=";
	 cin>>temp->x;
	 temp->pnext=NULL;
	 cout<<"element is added"<<endl;
	 break;
  case 3:
	 node *h=head;
	 while(h!=NULL)
	 {
	  cout<<h->x;
	  cout<<"->";
	  h=h->pnext;
	 }
	 cout<<endl;
	 break;
  case 4:
	 delete head;
	 cout<<"list is dead"<<endl;
	 getch();
	 exit(0);
	 break;
  default:
	 cout<<"invalid input"<<endl;
	 break;
  }
 }
}
