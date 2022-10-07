#include <conio.h>
#include <iostream.h>
#define MAX 50
class vector
{
private:
int a;
int b;
int c;
public:
vector(void);
vector(int,int,int);
friend istream &operator>>(istream &,vector &);
friend ostream & operator<<(ostream &,vector &);
vector operator+(const vector &);
friend vector operator*(const vector &,const vector &);
void operator++();
friend void operator--(vector &);
};
vector::vector(void)
{
 a=0;
 b=0;
 c=0;
}
void main(void)
{
clrscr();
vector v[MAX];
int n;
cout<<"enter n=";
cin>>n;
for(int i=0;i<n;i++)
cin>>v[i];
for(i=0;i<n;i++)
cout<<v[i];
vector add(0,0,0);
for(i=0;i<n;i++)
add=add+v[i];
cout<<add<<endl;
vector mul(1,1,1);
for(i=0;i<n;i++)
mul=mul*v[i];
cout<<mul<<endl;
for(i=0;i<n;i++)
{
v[i]++;
cout<<v[i];
--v[i];
cout<<v[i];
}
getch();
}
vector::vector(int i,int j,int k)
{
 a=i;
 b=j;
 c=k;
}
istream & operator>>(istream & in,vector & v)
{
in>>v.a;
in>>v.b;
in>>v.c;
return in;
}
ostream & operator<<(ostream & out,vector &v)
{
out<<v.a<<"i+"<<v.b<<"j+"<<v.c<<"k"<<endl;
return out;
}
vector vector::operator+(const vector &v)
{
 vector ans;
 ans.a=a+v.a;
 ans.b=b+v.b;
 ans.c=c+v.c;
 return ans;
}
vector operator*(const vector &v1,const vector &v2)
{
 vector ans;
 ans.a=v1.a*v2.a;
 ans.b=v1.b*v2.b;
 ans.c=v1.c*v2.c;
 return ans;
}
void vector::operator++()
{
 a++;
 b++;
 c++;
}
void operator--(vector &v)
{
 v.a--;
 v.b--;
 v.c--;
}

