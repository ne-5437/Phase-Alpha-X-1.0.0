#include <iostream.h>
#include <conio.h>
class rational
 {
  private: int nr;
	   int dr;
  public: rational(void);
	  rational(int,int);
	  rational(const rational &);
	  void setvalues(void);
	  int getvalues(int);
	  rational operator+(const rational &);
	  friend rational operator-(const rational &, const rational &);
	  ~rational(void);
 };
rational::rational(void)
 {
  nr=0;
  dr=1;
 }
rational::rational(int a,int b)
 {
  nr=a;
  dr=b;
 }
rational::rational(const rational &r)
 {
  nr=r.nr;
  dr=r.dr;
 }
void rational::setvalues(void)
 {
  cin>>nr;
  cin>>dr;
 }
int rational::getvalues(int f)
 {
  if(f==0)
   return nr;
  else
   return dr;
 }
rational rational::operator+(const rational &r)
 {
  rational ans;
  ans.nr=(this->nr*r.dr)+(this->dr*r.nr);
  ans.dr=this->dr*r.dr;
  return ans;
 }
rational rational::operator-(const rational &r1,const rational &r2)
 {
  rational ans;
  ans.nr=(r1.nr*r2.dr)-(r1.dr*r2.nr);
  ans.dr=r1.dr*r2.dr;
  return ans;
 }
void main(void)
 {
  rational r1;
  cout<<"r1=";
  r1.setvalues();
  cout<<"r1="<<r1.getvalues(0)<<"/"<<r1.getvalues(1)<<endl;
  rational r2;
  cout<<"r2=";
  r2.setvalues();
  cout<<"r2="<<r2.getvalues(0)<<"/"<<r2.getvalues(1)<<endl;
  rational r3;
  r3=r1+r2;
  cout<<"r3="<<r3.getvalues(0)<<"/"<<r3.getvalues(1)<<endl;
  rational r4;
  r4=r1-r2;
  cout<<"r4="<<r4.getvalues(0)<<"/"<<r4.getvalues(1)<<endl;
  getch();
 }