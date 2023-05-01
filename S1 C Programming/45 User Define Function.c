#include <stdio.h>
#include <conio.h>

int getbig(int, int, int);

int getbig(int x, int y, int z)
  {
   return ((x>=y)?(x>=z)?x:z
                 :(y>=z)?y:z);
  }

void main(void)
  {
    int a,b,c,ans;
    clrscr();
    printf("\n Enter the value of a,b,c= ");
    scanf("%d%d%d",&a,&b,&c);
    ans=getbig(a,b,c);
    printf("Biggest of %d,%d,%d = %d",a,b,c,ans);
    getch();
  } 

    
    