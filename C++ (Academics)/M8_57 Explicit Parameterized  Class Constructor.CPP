#include <iostream.h>
#include <conio.h>
#include<math.h>

class point2D
 {
  protected: float x;
	     float y;
  public :
	  point2D(float a=0.0,float b=0.0)
	   {
	     x=a;
	     y=b;
	   }
 };

class point3D:public point2D
 {
  private: float z;
  public:
	 point3D(float m=0.0,float n=0.0,float r=0.0):point2D(m,n)
	  {
	   z=r;
	  }
	 void setpoint(void)
	  {
	   cin>>x>>y>>z;
	  }
	 friend void getDis(const point3D&,const point3D&);
 };
void getDis(const point3D&A,const point3D&B)
 {
  float d1=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
  cout<<"\nDistance of AB in 2D="<<d1<<endl;
  float d2=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y)+(A.z-B.z)*(A.z-B.z));
  cout<<"\nDistance of AB in 3D="<<d2<<endl;
 }

void main(void)
 {
  clrscr();
  point3D p1(2.0,3.0,4.0);
  cout<<"p1 is (2,3,4)"<<endl;
  point3D p2;
  cout<<"\n Enter the coordinates of p2="<<endl;
  p2.setpoint();
  getDis(p1,p2);
  getch();
 }
