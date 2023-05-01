#include <stdio.h>
#include <conio.h>
void main(void)
 {
    int a,n,c;
    clrscr();
    printf("\n Enter a=");
    scanf("%d",&a);
    printf("\n Enter n=");
    scanf("%d",&n);
    c=a<<n;
    printf("\n Multiplying a with 2^n=%d",c);
    c=a>>n;
    printf("\n Dividing a with 2^n=%d",c);
    getch();
 }