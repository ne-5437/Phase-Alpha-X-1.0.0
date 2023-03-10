#include <iostream.h>
#include <conio.h>
class student
{
 private:
	 char name[100];
	 int M[6];
	 float per;
 public:
	 student(void);
	 //student(char *);
	 //student(const student &);
	 void setvalues(void);
	 void getvalues(void);
	 void docourse(const student &);
	 friend void doper(const student &,const student &);
	 //~student(void);
};
student::student(void)
{
 per=0.00;
 for(int i=0;i<100;i++)
 name[i]=0;
 for(i=0;i<6;i++)
 M[i]=0;
}
void student::setvalues(void)
{
 cout<<"name=";
 cin.ignore();
 cin.getline(name,100);
 for(int i=0;i<6;i++)
 {
  cout<<"M["<<i<<"]=";
  cin>>M[i];
  per+=M[i];
 }
 per/=6;
}
void student::getvalues(void)
{
 cout<<name<<endl;
 for(int i=0;i<6;i++)
 cout<<"M["<<i<<"]="<<M[i]<<endl;
 cout<<per<<endl;
}
void student::docourse(const student &s)
{
 for(int i=0;i<6;i++)
 {
  if(M[i]>s.M[i])
  cout<<"in course-"<<i<<" s1 is topper"<<endl;
  else if(M[i]<s.M[i])
  cout<<"in course-"<<i<<" s2 is topper"<<endl;
  else
  cout<<"in course-"<<i<<"s1=s2"<<endl;
 }
}
void doper(const student &s1,const student &s2)
{
 if(s1.per>s2.per)
 cout<<"s1 is topper"<<endl;
 else if(s1.per<s2.per)
 cout<<"s2 is topper"<<endl;
 else
 cout<<"s1=s2"<<endl;
}
void main(void)
{
 student s1;
 student s2;
 clrscr();
 cout<<"s1=";
 s1.setvalues();
 cout<<"s2=";
 s2.setvalues();
 cout<<"s1=";
 s1.getvalues();
 cout<<"s2=";
 s2.getvalues();
 cout<<"comparing s1 & s2 course wise"<<endl;
 s1.docourse(s2);
 cout<<"comparing s1 & s2 percentage"<<endl;
 doper(s1,s2);
 getch();
}