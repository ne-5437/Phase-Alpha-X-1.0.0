#include <iostream.h>
#include <conio.h>
class sample
 {
  private: static int count;
	   int x;
  public: sample(void);
	  sample(int);
	  sample(const sample &);
	  static int getcount(void);
	  ~sample(void);
 };

int sample::count=3;

sample::sample(void)
 {
  x=0;
  count++;
 }
sample::sample(int a)
 {
  count++;
  x=a;
 }
int sample::getcount(void)
 {
  return count;
 }
sample::~sample(void)
 {
  count--;
 }
void main(void)
 {
  clrscr();
  sample s1;
  sample s2(3);
  sample s[20];
  cout<<s1.getcount();
  cout<<s2.getcount();
  cout<<sample::getcount();
  getch();
 }

