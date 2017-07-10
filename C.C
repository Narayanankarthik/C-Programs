#include<stdio.h>
void main()
{
int x=10,y=15;
clrscr();
x=x++ + ++y;
y=++y + x++;
printf("%d\t%d",x,y);
getch();
}