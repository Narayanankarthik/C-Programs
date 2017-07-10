#include<stdio.h>
#include<conio.h>
void main()
{
int x=100,y=200;
int i,j;
clrscr();
if(x<y)
{
for(i=x;i<=y;i++)
{
if(i==y)
{
x=i;
printf("x=%d\t",x);
}
}
for(j=y;j<=x;j--)
{
if(j==x)
{
y=i;
printf("y=%d\t",y);
}
}

}

else
{
for(j=y;j<=x;j--)
{
if(j==x)
{
y=i;
printf("y=%d\t",y);
}
}
for(i=x;i<=y;i++)
{
if(i==y)
{
x=i;
printf("x=%d\t",x);
}
}

}
getch();
}






