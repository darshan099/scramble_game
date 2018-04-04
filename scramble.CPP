#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<fstream.h>
void main()
{
clrscr();
int x,y,z,i,l,j,r1,r2,r3,r4;
char c[1000],a[100]={"\0"},b[100],d[100];
ifstream fin,fin1;
fin.open("scramble.txt");
fin1.open("scramble.txt");
x=0;
srand(time(NULL));
y=rand()%10+1;
while(!fin.eof())
{
fin.getline(c,2);
if(strcmp(c," ")==0)
{
++x;
}
if(strcmp(c," ")!=0 && x==y)
{
strcat(a,c);
}

}
strcpy(b,a);
l=strlen(b);
srand(time(NULL));
r1=rand()%l;
r2=rand()%l;
r3=rand()%l;
r4=rand()%l;
if(l>0 && l<=3)
{
b[r1]='-';
}
else if(l>3 && l<=5)
{
b[r1]='-';
b[r2]='-';
}
else if(l>5 && l<=8)
{
b[r1]='-';
b[r2]='-';
b[r3]='-';
}
else
{
b[r1]='-';
b[r2]='-';
b[r3]='-';
b[r4]='-';
}
cout<<b<<"\n";
cout<<"enter the correct answer"<<endl;
cin>>d;
if(strcmp(d,a)==0)
{
cout<<"correct answer"<<endl;
}
else
{
cout<<"wrong answer"<<endl;
}
fin.close();
fin1.close();
getch();
}