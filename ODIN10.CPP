#include<iostream.h>
#include<conio.h>
class number
{
int  *p;
public:
number(int a)
{p=new int [a];}
void add(int a)
{delete p;
a++;
cout<<"enter number";
cin>>p[a];
}
void input(int a);
void remove(int v,int a);
void display(int i)
{
cout<<p[i]<<" ";}
};
void number:: input(int a)
{int i;
for(i=0;i<a;i++)
{cout<<"ENTER NUMBER p["<<i+1<<"] ";
cin>>p[i]; }
}
void number::remove(int v,int a)
{
v--;int j=v+1,c;
while(j!=a)
{c=p[j];
p[j]=p[v];
p[v]=c;
j++;
v++;
}
}
void main()
{int a,x,b,v,i;
clrscr();
cout<<"enter size of array";
cin>>a;
number n(a);
n.input(a);
while(x!=4)
{
clrscr();
cout<<"1 : add \t 2: remove \t 3 : display \t 4 exit ";
cin>>x;
if(x==1)
{
n.add(a);
}
else if(x==3)
{  int i;
for(i=0;i<a;i++)
n.display(i);
}
else if(x==4)
break;
else if(x==2)
{
cout<<"enter index of number ";
cin>>v;
n.remove(v,a);
a--;}
getch();
}
getch();
}