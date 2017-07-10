#include<stdio.h>
#include<conio.h>
void main()
{
 signed int a=-7,b=8,c=-10,d,e;
 clrscr();
 ++a;
 --b;
 c++;
 d=a+b+c;
 e=d&&b||c;
 printf("%d\t%d\t%d\t%d\t%d",a,b,c,d,e);
 getch();
 }
