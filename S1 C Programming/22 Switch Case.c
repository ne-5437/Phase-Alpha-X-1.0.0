#include<stdio.h>
#include<conio.h>
int main()
 {
   float a,b,ans;
   char ch;
   printf("Choose{a.add,b.sub,c.mul,d.div}=");
   ch=getchar();//Non-formatted input
   printf("\nEnter 2 numbers:");
   scanf("%f %f",&a,&b);
   switch(ch)
    {
     case 'a':
            ans=a+b;
            break;
     case 'b':
            ans=a-b;
            break;
     case 'c':
            ans=a*b;
            break;
     case 'd':
            ans=a/b;
            break;
     default:
        printf("\nThe given input is invalid");
        break;
    }
   printf("\nAnswer=%f",ans);
   return 0;
 }
    