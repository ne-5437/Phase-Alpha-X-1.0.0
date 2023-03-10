#include <iostream.h>
#include <conio.h>

inline int getcube(int n)
 {
  return (n*n*n);
 }

void main(void)
 {
  int x;
  clrscr();
  cout<<"x-";
  cin>>x;
  int ans;
  ans=getcube(x);
  cout<<"ans="<<ans;
  getch();
 }