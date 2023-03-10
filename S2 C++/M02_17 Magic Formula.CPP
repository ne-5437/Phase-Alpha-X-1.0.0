#include <iostream.h>
#include <conio.h>
#define PI 22.0/7
void main(void)
{
 clrscr();
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 for(int i=1;i<=6;i++)
 {
  cout.precision(i);
  cout<<PI<<endl;
 }
 getch();
}