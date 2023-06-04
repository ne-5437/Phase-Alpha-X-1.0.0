#include <stdio.h>
#include <conio.h>
#include <string.h>
int search(char *,char *);
int search(char *pat,char *txt)
{
 int m,n,i,j;
 m=strlen(pat);
 n=strlen(txt);
 for(i=0;i<=n-m;i++)
 {
  for(j=0;j<m;j++)
  {
   if(txt[i+j]!=pat[j])
    break;
  }
  if(j==m)
  return i;
 }
 return -1;
}
void main(void)
{
 char *txt,*pat;
 int ans;
 clrscr();
 txt=(char*)malloc(sizeof(char));
 pat=(char*)malloc(sizeof(char));
 printf("enter text=");
 gets(txt);
 printf("enter pattern=");
 gets(pat);
 ans=search(pat,txt);
 if(ans==-1)
 printf("\npattern is not found");
 else
 printf("\npattern is found at index %d",ans);
 getch();
}
