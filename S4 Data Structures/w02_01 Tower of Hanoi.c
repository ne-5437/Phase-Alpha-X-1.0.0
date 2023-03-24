#include <stdio.h>
#include <conio.h>
void towersofhenoi(int, char, char, char);
void towersofhenoi(int n, char from, char to, char auxi)
 {
  if(n==1)
   {
    printf("\n move disc 1 from %c to %c",from,to);
    return;
   }
  towersofhenoi(n-1,from,auxi,to);
  printf("\n move disc 2 from %c to %c",from,to);
  towersofhenoi(n-1,auxi,to,from);
 }

void main(void)
 {
  int n;
  clrscr();
  printf("Enter the no of discs:");
  scanf("%d",&n);
  printf("enter the sequence of moves");
  towersofhenoi(n,'a','b','c');
  getch();
 }