#include <stdio.h>
#include <conio.h>
void main(void)
 {
  int a,b,ch,ans;
  clrscr();
  printf("\n Enter any 2 numbers =");
  scanf("%d%d",&a,&b);
  printf("\n Choose \n 1.Add \n 2.Sub \n 3.Mul \n 4.Div \n 5.Mod");
  scanf("%d",&ch);
  switch(ch) 
   {
     case 1:
             ans=a+b;
             break;
     case 2:
             ans=a-b;
             break;
     case 3:
             ans=a*b;
             break;
     case 4:
             ans=a/b;
             break;
     case 5: 
             ans=a%b;
             break;
     default:
             printf("\n Invalid Ch!") ;
             break;
   } 
  printf("\n Ans=%d",ans);
  getch();
 } 
         