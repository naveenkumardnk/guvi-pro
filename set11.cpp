#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int tl,tl1,n,i=0,j=0,k;
char temp[50],temp1[50],temp3[50];
clrscr();
cout<<"enter the no of strings...";
cin>>n;
while(n>0)
{
if(i==0)
{
cout<<"\nenter the string...";
cin>>temp;
tl=strlen(temp);
i++;
}
else
{
cout<<"\n enter the string...";
cin>>temp1;
tl1=strlen(temp1);
for(int k=0;k<tl;k++)
{
if(temp[k]==temp1[k])
{
temp[j]=temp[k];
j++;
}
}
temp[j]='\0';
}
n--;
}
cout<<temp3;
getch();
}
