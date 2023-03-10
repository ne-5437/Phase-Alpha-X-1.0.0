#include <iostream.h>
#include <conio.h>

int getbig(int,int);
char getbig(char,char);
float getbig(float,float);

int getbig(int a,int b)
 {
  if(a>=b)
   return a;
  else
   return b;
 }

char getbig(char c1,char c2)
 {
  if(c1>=c2)
   return c1;
  else
   return c2;
 }

float getbig(float x,float y)
 {
  return((x>=y)?x:y);
 }

void main(void)
 {
  clrscr();
  int a,b;
  cout<<"enter 2 no's=";
  cin>>a>>b;
  int big;
  big=getbig(a,b);
  cout<<"big"<<big<<endl;
  float f1,f2;
  cout<<"enter 2 floating no=";
  cin>>f1>>f2;
  cout<<"big="<<getbig(f1,f2);
  cout<<"big 3="<<getbig('v','c');
  getch();
 }