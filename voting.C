#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
char cr[50][50],voter[100][50];
int crv[5],i,j;
void name();
void vote();
void print();
void main(void)
{
clrscr();
cout<<"\n\t\tVOTEING FOR CR\n\n";
cout<<"How many CR candidates = ";
cin>>i;
name();
l:
clrscr();
cout<<"\n\t\tVOTEING\n\n";
print();
vote();
cout<<"\n\n\nMore Votes???\nYES\tNO";
char g=getch();
if(g=='y')
{
goto l;
}
else if(g=='n')
{
for(j=1;j<=i;j++)
{
cout<<"\nvote for "<<cr[j]<<" is "<<crv[j];
}
}
getch();
}
void name()
{
 for(int a=1;a<=i;a++)
 {
 cout<<"\t\tEnter CR Candidates Name= "<<a<<" ";
 gets(cr[a]);
 strupr(cr[a]);
 }
}
void print()
{
 for(int a=1;a<=i;a++)
 {
 cout<<"For "<<cr[a]<<" Press "<<a<<" "<<endl;
 }
}
void vote()
{
char x;
x=getch();
switch(i)
{
case 2:
 if(x=='1')
 {
 crv[1]++;
 cout<<"thank you";
  }
 else if(x=='2')
 {
  crv[2]++;
 cout<<"thank you";
  }
 else
 {
 cout<<"Wrong Entery Enter Again";
 }
break;
case 3:
 if(x=='1')
 {
 crv[1]++;
 cout<<"thank you";
  }
 else if(x=='2')
 {
  crv[2]++;
 cout<<"thank you";
  }
 else if(x=='3')
 {
 crv[3]++;
 cout<<"thank you";
 }
 else
 {
 cout<<"Wrong Entery Enter Again";
 }
break;
case 4:
 if(x=='1')
 {
 crv[1]++;
 cout<<"thank you";
  }
 else if(x=='2')
 {
  crv[2]++;
 cout<<"thank you";
  }
 else if(x=='3')
 {
 crv[3]++;
 cout<<"thank you";
 }
 else if(x=='4')
 {
 crv[4]++;
 cout<<"thank you";
 }
 else
 {
 cout<<"Wrong Entery Enter Again";
 }
break;
case 5:
 if(x=='1')
 {
 crv[1]++;
 cout<<"thank you";
  }
 else if(x=='2')
 {
  crv[2]++;
 cout<<"thank you";
  }
 else if(x=='3')
 {
 crv[3]++;
 cout<<"thank you";
 }
 else if(x=='4')
 {
 crv[4]++;
 cout<<"thank you";
 }
 else if(x=='5')
 {
 crv[5]++;
 cout<<"thank you";
 }
 else
 {
 cout<<"Wrong Entery Enter Again";
 }
break;
}
}