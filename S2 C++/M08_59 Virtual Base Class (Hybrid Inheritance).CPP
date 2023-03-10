#include<conio.h>
#include<iostream.h>
#include<math.h>

class student
 {
  protected: char name[100];
	     int roll;
  public: void setdetails(void)
	   {
	    cout<<"\enter name:";
	    cin.getline(name,100);
	    cout<<"\nenter roll number:";
	    cin>>roll;
	   }
	  char *getname(void)
	   {
	    return name;
	   }
	  int getroll(void)
	   {
	    return roll;
	   }
 };

class cie: public virtual student
 {
   protected: float a[3];
	      float q[3];
	      float m[2];
   public: void setcie(void)
	    {
	      for(int i=0;i<3;i++)
	       {
		cout<<"\nenter quiz["<<i+1<<"] and assignment["<<i+1<<"]marks:";
		cin>>q[i]>>a[i];
	       }
	      for(i=0;i<2;i++)
	       {
		cout<<"\nenter internal["<<i+1<<"] marks:";
		cin>>m[i];
	       }
	     }
	    float getcieavg(void)
	     {
	      float ans=0;
	      for(int i=0;i<3;i++)
	       ans+=a[i]+q[i];
	      ans=ans/3;
	      ans=ans+(m[0]+m[i])/2.0;
	      return ans;
	     }
};
class see: public virtual student
 {
  protected: float ext;
  public: void setsee(void)
	   {
	    cout<<"\nenter semister end marks";
	    cin>>ext;
	   }
 };
class assessment: public cie,public see
{
	 private: int tot;
		char grade;
	 public: void update(void)
		 {
		      float t=getcieavg();
		      tot=ceil(ext+t);
		      if(tot>=80)
			  grade='A';
		      else if(tot>=70)
			  grade='B';
		      else if(tot>=60)
			  grade='C';
		      else if(tot>=50)
			  grade='D';
		      else
			  grade='F';
		  }
	  void show(void)
	  {
	   cout<<tot<<"\t"<<"\ngrade:"<<grade;
	  }
};
void main(void)
 {
  clrscr();
  assessment a1;
  a1.setdetails();
  cout<<"\nenter CIE marks:\n";
  a1.setcie();
  cout<<"\nFinal CIE marks"<<a1.getcieavg();
  cout<<"\nMarks in SEE:";
  a1.setsee();
  a1.update();
  cout<<"\nPerformance:\n"<<"Name:"<<a1.getname()<<"\nroll number:"<<a1.getroll()<<"\nMarks:";
  a1.show();
  getch();
 }


