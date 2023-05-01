#include <stdio.h>
#include <conio.h>
void main(void)
 {
   float x;
   char grade;
   clrscr();
   printf("\n Enter student sgpa=");
   scanf("%f",&x);
   printf("\n Grade=");
   if(x>=9.000)
     grade='S';
   else if(x>=8.000)
     grade='A';
   else if(x>=7.000) 
     grade='B';
   else if(x>=6.000)
     grade='C';
   else if(x>=5.000)
     grade='D';
   else
     grade='F';
   printf("Grade=%c",grade);
   getch();
 } 
                    
    