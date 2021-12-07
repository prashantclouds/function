#include<stdio.h>
#include<conio.h>
void main()
{
int add(int ,int );  //declaration
int a,b;
int  z;
clrscr();
printf("\n enter the value of a and b");
scanf("%d%d",&a,&b);
z=add(a,b); //calling
printf("%d",z);
getch();
}
int add(int p,int q)    //body
{
int res;
res=p+q;
return res;
}
