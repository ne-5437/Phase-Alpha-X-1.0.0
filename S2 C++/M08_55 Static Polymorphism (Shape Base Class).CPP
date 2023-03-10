#include <iostream.h>
#include <conio.h>

class shape
 {
  protected: float length;
	     float width;

  public: void setvalues()
	   {
	    cout<<"Enter length=";
	    cin>>length;
	    cout<<"Enter width=";
	    cin>>width;
	   }
 };

class triangle:public shape
 {
  public:
	 float getarea(void)
	  {
	   return(length*width*1/2.0);
	  }
 };

class rectangle:public shape
 {
  public:
	 float getarea(void)
	  {
	   return(length*width);
	  }
 };

void main(void)
 {
  rectangle r;
  triangle t;
  clrscr();
  cout<<"Enter triangle dimensions:"<<endl;
  t.setvalues();
  cout<<"Enter rectangle dimensions"<<endl;
  r.setvalues();
  cout<<"\nTriangle area="<<t.getarea();
  cout<<"\nRectangle area="<<r.getarea();
  getch();
 }