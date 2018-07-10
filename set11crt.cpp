#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
int tl,n,i=0,j=0,k;
char temp[50],temp1[50];
clrscr();
cout<<"enter the no of strings...";
cin>>n;
while(n>0)
{
j=0;
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
for(int k=0;k<tl;k++)
{
if(temp[k]==temp1[k])
{
temp[j]=temp[k];
j++;
}
}
temp[j]=NULL;
}
tl=strlen(temp);
n--;
}
cout<<temp;
getch();
return 0;
}
