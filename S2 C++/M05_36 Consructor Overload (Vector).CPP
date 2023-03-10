#include <iostream.h>
#include <conio.h>
class vector
 {
  private:  int x;
	    int y;
	    int z;
  public: vector(void);
	  vector(int,int,int);
	  vector(const vector &);
	  void setvalues(void);
	  void getvalues(void);
	  ~vector(void);
 }
 vector::vector(void)
  {
   cout<<"I'm in Default Constructor"<<endl;
   x=0;
   y=0;
   z=0;
  }
 vector::vector(int a, int b, int c)
  {
   cout<<"I'm in Parametarized Constructor"<<endl;
   x=a;
   y=b;
   z=c;
  }
 vector::vector(const vector &v)
  {
   cout<<"I'm in Copy Constructor"<<endl;
   x=v.x;
   y=v.y;
   z=v.z;
  }
 void vector::setvalues(void)
  {
   cout<<"x=";
   cin>>x;
   cout<<"y=";
   cin>>y;
   cout<<"z=";
   cin>>z;
  }
 void vector::getvalues(void)
  {
   cout<<x<<"i+"<<y<<"j+"<<z<<"k"<<endl;
  }
 vector::~vector(void)
  {
   cout<<"I'm in Destructor";
   getch();
  }
 void main(void)
  {
   clrscr();
   vector v1;
   cout<<"Enter v1=";
   v1.setvalues();
   cout<<"v1=";
   v1.getvalues();
   vector v2(-2,7,-6);
   cout<<"v2=";
   v2.getvalues();
   vector v3(v1);
   cout<<"v3=";
   v3.getvalues();
   getch();
  }