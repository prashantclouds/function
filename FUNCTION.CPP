#include<stdio.h>
#include<conio.h>
int fact();
int n;
void main()
{
clrscr();
int z;
printf("\n enter the number");
scanf("%d",&n);
z=fact();
printf("%d",z);
getch();
}
int fact()
{
int f=1;
for(int i=n;i>=1;i--)
{
f=f*i;
}
return f;
}