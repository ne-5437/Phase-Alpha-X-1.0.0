#include <stdio.h>
#include <conio.h>
void main(void) 
 {
   unsigned char key;
   clrscr();
   printf("\n Enter any key =");
   scanf("%c",&key);
   switch(key) 
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
              printf("\n Lower Vowel!");
              break;
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
              printf("\n Upper Vowel!");
              break;
      default :
              if(key>='A'&&key<='Z') 
               printf("\n Upper Consonant!");
              else if(key>='a'&&key<='z') 
               printf("\n Lower Consonant!");
              else if(key>='0'&&key<='9')
               printf("\n A Number");
              else 
               printf("Special Character!");
    } 
   getch();
 } 
         