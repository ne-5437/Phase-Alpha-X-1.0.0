#include <stdio.h>
#include <conio.h>

int ispali(int);

int ispali(int x)
  {
    static int Backup=0,rev;
    Backup=x;
    if(Backup==rev)
      return 1;
    if(x==0)
      return 0;
    rev=(rev=10)+(x%10);
    return ispali(x/10);
   } 

void main(void)
  {
    int n,i;
    printf("\n Enter the value of n ");
    scanf("%d",&n);
    if(ispali(n)==1)
      printf("\n It is a Palindrome");
    if(ispali(n)==0)
      printf("It is not a Palindrome"); 
    getch();
  }