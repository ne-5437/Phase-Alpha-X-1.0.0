#include<stdio.h>
#include<conio.h>
#define MAX 10

struct term
 {
  int coe;
  int exp;
 };

struct poly
 {
  struct term T[MAX];
  int NoT;
 };

void polyint(struct poly*);

void polyint(struct poly* p)
 {
  int i;
  p->NoT=0;
  for(i=0;i<MAX;i++)
   {
    p->T[i].coe=0;
    p->T[i].exp=0;
   }
 }
void polydef(struct poly*);

void polydef(struct poly* p)
 {
  int i;
  printf("\nEnter no of terms=");
  scanf("%d",&p->NoT);
  printf("\nEnter the polynomial=");
  for(i=0;i<p->NoT;i++)
   {
    printf("\ncoe- and exp-");
    scanf("%d %d",&p->T[i].coe,&p->T[i].exp);
   }
 }

void polydis(struct poly*);

void polydis(struct poly*p)
 {
  int i;
  printf("\nThe polynomial is:%dx^(%d)",p->T[0].coe,p->T[0].exp);
  for(i=1;i<p->NoT;i++)
   {
    if(p->T[i].coe>0)
    printf("+");
    printf("%dx^(%d)",p->T[i].coe,p->T[i].exp);
   }
 }


void polyadd(struct poly*,struct poly*);

void polyadd(struct poly*p1,struct poly*p2)
 {
  int i,j,sum;
  int c=0;
  struct poly p3;
  polyint(p3);
  for(i=0;i<p1->Not;i++)
   {
    for(j=0;j<p2->NoT;j++)
     {
      if(p1->T[i].exp==p2->T[j].exp)
      c++;
     }
   }
  p3->NoT=p1->NoT+p2->NoT-c;
  if(p1->T[0].exp>p2->T[0].exp)
   {
    for(i=0;i<p1->NoT;i++)
     {
      p3->T[i].exp=p1->T[i].exp;
      p3->T[i].coe=p1->T[i].coe;
     }
   for(i=0;i<p1->NoT;i++)
   {
    for(j=0;j<p2->NoT;j++)
     {
      if(p1->T[i].exp==p2->T[j].exp)
      p3->T[i].coe+=p2->T[j].coe;
     }
   }
   for(i=p1->NoT;i<p3->NoT;i++)
   }
  else
   {
    for(i=0;i<p2->NoT;i++)
     {
      p3->T[i].exp=p2->T[i].exp;
      p3->T[i].coe=p2->T[i].coe;
     }
   }
 }

void main(void)
 {
  struct poly p1;
  struct poly p2;
  clrscr();
  polyint(&p1);
  polydef(&p1);
  polydis(&p1);
  polyint(&p2);
  polydef(&p2);
  polydis(&p2);
  getch();
 }