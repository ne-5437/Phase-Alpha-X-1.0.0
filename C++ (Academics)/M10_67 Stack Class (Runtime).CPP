#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
class stack
{
 private:
	 int *S;
	 int n;
	 int top;
 public:
	stack(void);
	int push(int);
	int pop(void);
	void display(void);
	~stack(void);
};
stack::stack(void)
{
 cout<<"enter n=";
 cin>>n;
 S=new int [n];
 top=-1;
 for(int i=0;i<n;i++)
 S[i]=0;
}
int stack::push(int k)
{
 if(top==(n-1))
 {
  cout<<"stack overflow";
  return -1;
 }
 top++;
 S[top]=k;
 return 1;
}
int stack::pop(void)
{
 if(top==-1)
 {
  cout<<"stack underflow";
  return -1;
 }
 int temp=S[top];
 top--;
 return temp;
}
void stack::display(void)
{
 for(int i=0;i<=top;i++)
 cout<<S[i]<<'\t';
}
void main(void)
{
 clrscr();
 stack s1;
 int ch,x,y;
 while(1)
 {
  cout<<"1.push\
	 2.pop\
	 3.display\
	 4.exit"<<endl;
  cin>>ch;
  switch(ch)
  {
   case 1:
	  cout<<"enter y=";
	  cin>>y;
	  x=s1.push(y);
	  if(x==-1)
	  cout<<"error";
	  else
	  cout<<"pushed";
	  break;
  case 2:
	 x=s1.pop();
	 if(x==-1)
	 cout<<"error";
	 else
	 cout<<"poped="<<x;
	 break;
  case 3:
	 cout<<"stack\n";
	 s1.display();
	 break;
  case 4:
	 exit(0);
	 break;
  default:
	 cout<<"invalid input";
	 break;
  }
 }
}

