#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
template <class T>
class stack
{
 private:
	 T *S;
	 int n;
	 int top;
 public:
	stack(void);
	int push(T);
	T pop(void);
	void display(void);
	~stack(void);
};

template <class T>
stack<T>::stack(void)
{
 cout<<"enter n=";
 cin>>n;
 S=new T [n];
 top=-1;
 for(int i=0;i<n;i++)
 S[i]=0;
}

template <class T>
int stack<T>::push(T k)
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

template <class T>
T stack<T>::pop(void)
{
 if(top==-1)
 {
  cout<<"stack underflow";
  return -1;
 }
 T temp=S[top];
 top--;
 return temp;
}
template <class T>
void stack<T>::display(void)
{
 for(int i=0;i<=top;i++)
 cout<<S[i]<<'\t';
}
template <class T>
stack<T>::~stack(void)
{
 delete []S;
}

void main(void)
{
 clrscr();
 stack <int>s1;
 stack <char>s2;
 int ch,x,y;
 char k,m;
 while(1)
 {
  cout<<"1.push int\
	 2.pop int\
	 3.display int\
	 4.push char\
	 5.pop char\
	 6.display char\
	 7.exit"<<endl;
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
  case 7:
	 exit(0);
	 break;
   case 4:
	  cout<<"enter k=";
	  cin>>k;
	  x=s2.push(k);
	  if(x==-1)
	  cout<<"error";
	  else
	  cout<<"pushed";
	  break;
  case 5:
	 m=s2.pop();
	 if(m==-1)
	 cout<<"error";
	 else
	 cout<<"poped="<<m;
	 break;
  case 6:
	 cout<<"stack\n";
	 s2.display();
	 break;
  default:
	 cout<<"invalid input"<<endl;
	 break;
  }
 }
}