#include <stdio.h>
#include <conio.h>
void main(void)
 {
  unsigned char key;
  int i;
  clrscr();
  i=0;
  key=0;
   do
   {
     printf("\nASCII(%c)-Dec:%d-Hex:%x-Oct:%o",key,key,key,key);
     key++;
     i++;
     if(i%25==0)
      getch();
   }while(i!=256);
  getch();
 }