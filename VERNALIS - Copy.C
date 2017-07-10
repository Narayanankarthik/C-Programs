#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b=-7,c=0,d;
clrscr();
d=++a&&++b||++c;
printf("\n%d%d%d%d",a,b,c,d);
getch();
}
