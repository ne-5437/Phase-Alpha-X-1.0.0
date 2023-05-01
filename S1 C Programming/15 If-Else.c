#include<stdio.h>
#include<conio.h>
void main(void)
 {
  char a,b,c,d,ans;
  printf("Enter any four characters=");
  scanf("%c %c %c %c",&a,&b,&c,&d);
  if(a>b)
   {
    if(a>c)
     {
      if(a>d)
      ans=a;
      else
      ans=d;
     }
    else
     {
      if(c>d)
       ans=c;
      else
       ans=d;
     }
   }
  else
   {
    if(b>c)
     {
      if(b>d)
      ans=b;
      else
      ans=d;
     }
    else
     {
      if(c>d)
      ans=c;
      else
      ans=d;
     }
   }
  printf("\nBiggest=%c",ans); 
 }

    