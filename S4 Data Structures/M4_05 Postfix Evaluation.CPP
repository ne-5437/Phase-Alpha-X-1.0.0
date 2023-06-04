\\module4-program5
#include<stdio.h>
#include<conio.h>
void sum();
void diff();
void mul();
void power();
void div();
int stack[50],top=-1;

void main(void)
{
char st[50];
clrscr();
int i;
printf("enetr expression");
scanf("%[^\n]s",st);
for(i=0;st[i]!='\0';i++)
{
if(st[i]!=' ')
{
switch(st[i])
{
case '+':
sum();
break;
case '-':
diff();
break;
case '*':
mul();
break;
case '/':
div();
break;
case '^':
power();
break;
default:
top++;
stack[top]=st[i]-48;
}
}
}
printf("the result=%d",stack[top]);
getch();
}
void sum()
{
int res,op1,op2;
op1=stack[top];
top--;
op2=stack[top];
top--;
res=op2+op1;
top++;
stack[top]=res;
}
void diff()
{
int res,op1,op2;
op1=stack[top];
top--;
op2=stack[top];
top--;
res=op2-op1;
top++;
stack[top]=res;
}
void div()
{
int res,op1,op2;
op1=stack[top];
top--;
op2=stack[top];
top--;
res=op2/op1;
top++;
stack[top]=res;
}
void power()
{
int res=1,op1,op2,i;
op1=stack[top];
top--;
op2=stack[top];
top--;
for(i=0;i<op1;i++)
{
res=res^op2;
}
top++;
stack[top]=res;
}
void mul()
{
int res,op1,op2;
op1=stack[top];
top--;
op2=stack[top];
top--;
res=op2*op1;
top++;
stack[top]=res;
}
 
