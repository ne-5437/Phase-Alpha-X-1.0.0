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
	  shape(void)
	   {
	    cout<<"\nshape constructor"<<endl;
	   }
	  virtual float getarea(void)
	   {
	    return 1.0;
	   }
	  ~shape(void)
	   {
	    cout<<"\nshape destructor"<<endl;
	    getch();
	   }
 };

class triangle:public shape
 {
  public:
	 triangle(void)
	  {
	   cout<<"\ntriangle constructor"<<endl;
	  }
	 float getarea(void)
	  {
	   return(length*width*1/2.0);
	  }
	 ~triangle(void)
	  {
	   cout<<"\ntriangle destructor"<<endl;
	   getch();
	  }
 };

class rectangle:public shape
 {
  public:
	 rectangle(void)
	  {
	   cout<<"\nrectangle constructor"<<endl;
	  }
	 float getarea(void)
	  {
	   return(length*width);
	  }
	 ~rectangle(void)
	  {
	   cout<<"\nrectangle destructor"<<endl;
	   getch();
	  }
 };

void main(void)
 {
  shape *s=NULL;
  clrscr();
  triangle t;
  s=&t;
  cout<<"Enter triangle dimensions:"<<endl;
  s->setvalues();
  cout<<"\nTriangle area="<<s->getarea();
  rectangle r;
  s=&r;
  cout<<"Enter rectangle dimensions"<<endl;
  s->setvalues();
  cout<<"\nRectangle area="<<s->getarea();
  getch();
 }