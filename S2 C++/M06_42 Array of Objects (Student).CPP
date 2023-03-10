#include<iostream.h>
#include<conio.h>

#define SUB 8
#define MAX 50

class Student
 {

  private:char name[100];
	  int rollno;
	  float M[SUB];
	  float per;
  public:
	 Student(void);
	 void setval(void);
	 void getval(void);
	 int doSem(const Student &,int);
	friend int doAll(const Student &,const Student &);
	 ~Student(void);
 };

Student::Student(void)
 {
  cout<<"\nIn Default constructor!";
  int i;
  for(i=0;i<100;i++)
   name[i]=0;
  rollno=0;
  for(i=0;i<SUB;i++)
   M[i]=0;
  per=0;
 }

void Student::setval(void)
 {
  int i;
  cin.ignore();
  cout<<"\nEnter name-";
  cin.getline(name,100);
  cout<<"\nEnter roll no=";
  cin>>rollno;
  cout<<"\nEnter marks-";
  for(i=0;i<SUB;i++)
   {
    cout<<"\nM["<<i<<"]=";
    cin>>M[i];
    per+=M[i];
   }
  per/=SUB;
 }

void Student::getval(void)
 {
  int i;
  cout<<"\nName of student-"<<name;
  cout<<"\nRollno-"<<rollno;
  cout<<"\nSGPA-";
  for(i=0;i<SUB;i++)
  cout<<M[i]<<"\t";
  cout<<"\nOverall percentage-"<<per;
 }

int Student::doSem(const Student&s,int c)
 {
   if(M[0]>s.M[c])
   return 0;
   else
   return 1;
 }

int doAll(const Student &s1,const Student &s2)
 {
   if(s1.per<s2.per)
    return 1;
   else
    return 0;
 }

Student::~Student(void)
 {
  cout<<"\nIn destructor!";
  getch();
 }


void main(void)
 {
  Student s[MAX];
  int i,n;
  Student top;
  cout<<"\nN=";
  cin>>n;
  for(i=0;i<n;i++)
   {
    cout<<"s["<<i<<"]=";
    s[i].setval();
   }
  int k;
  for(int j=0;j<SUB;j++)
   {
     top=s[0];
     for(i=1;i<n;i++)
      {
       k=top.doSem(s[i],j);
       if(k==1)
	{
	 top=s[i];
	}
      }
     cout<<"\nThe better performer is-"<<endl;
     top.getval();
   }
  top=s[0];
  for(i=1;i<n;i++)
   {
    if(doAll(top,s[i])==1)
    {
    top=s[i];
    }
   }
  cout<<"\nThe topper is-"<<endl;
  top.getval();
  getch();
 }