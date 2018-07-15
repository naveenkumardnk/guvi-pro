#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char x[50],y[50];
int i,count=0,c,xl,yl;
clrscr();
gets(x);
gets(y);
xl=strlen(x);
yl=strlen(y);
for(i=0;i<xl;i++)
{
if(x[i]==y[i])
{
count++;
}
}
c=yl-count;
printf("\n%d",c);
getch();
}
