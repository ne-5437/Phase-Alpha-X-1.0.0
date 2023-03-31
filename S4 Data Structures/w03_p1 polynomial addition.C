 #include<stdio.h>
 #include<conio.h>
 struct poly
 {
   int coeff;
   int exp;
 };
 struct poly p1[10],p2[10],p3[10];
 int readpoly(struct poly[]);
 int addpoly(struct poly[],struct poly[],int,int,struct poly[]);
 void displaypoly(struct poly[],int terms);
 void main(void)
 {
    int t1,t2,t3;
    clrscr();
    t1=readpoly(p1);
    printf("\n first poly:");
    displaypoly(p1,t1);
    t2=readpoly(p2);
    printf("\n second poly:");
    displaypoly(p2,t2);
    t3=addpoly(p1,p2,t1,t2,p3);
    printf("\n addn:");
    displaypoly(p3,t3);
    printf("\n");
    getch();
 }
 int readpoly(struct poly p[10])
 {
   int t1,i;
   printf("\n no.of terms-:");
   scanf("%d",&t1);
   for(i=0;i<t1;i++)
   {
   printf("\n coeff of (%d):",i+1);
   scanf("%d",&p[i].coeff);
   printf("\n enter exp(%d):",i+1);
   scanf("%d",&p[i].exp);
   }
   return(t1);
 }
 int addpoly(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10])
 {
  int i,j,k;
  i=0;
  j=0;
  k=0;
  while(i<t1 && j<t2)
  {
   if(p1[i].exp==p2[j].exp)
   {
    p3[k].coeff=p1[i].coeff+p2[j].coeff;
    p3[k].exp=p1[i].exp;
    i++;
    j++;
    k++;
   }
   else if(p1[i].exp>p2[j].exp)
   {
   p3[k].coeff=p1[i].coeff;
   p3[k].exp=p1[i].exp;
   i++;
   k++;
   }
   else
   {
     p3[k].coeff=p2[j].coeff;
     p3[k].exp=p2[j].exp;
     j++;
     k++;
   }
  }
  while(i<t1)
  {
    p3[k].coeff=p1[i].coeff;
    p3[k].exp=p1[i].exp;
    i++;
    k++;
  }
  while(j<t2)
  {
    p3[k].coeff=p2[j].coeff;
    p3[k].exp=p2[j].exp;
    j++;
    k++;
  }
  return(k);
  }
  void displaypoly(struct poly p[10],int term)
  {
   int k;
   for(k=0;k<term-1;k++)
    printf("%d(x^%d)+",p[k].coeff,p[k].exp);
    printf("%d(x^%d)",p[term-1].coeff,p[term-1].exp);
  }
