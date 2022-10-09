#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int a,b,ans1,ans2;
 float c,d,ans3,ans4;
 scanf("%d%d",&a,&b);
 scanf("%f%f",&c,&d);
 ans1=a+b;
 ans2=a-b;
 ans3=c+d;
 ans4=c-d;
 printf("%d %d\n",ans1,ans2);
 printf("%0.1f %0.1f",ans3,ans4);
    return 0;
}
