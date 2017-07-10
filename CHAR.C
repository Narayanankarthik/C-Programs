#include<stdio.h>
#include<conio.h>
void main()
{
char a[4],b[4];
int i;
clrscr();
for(i=0;i<4;i++)
{
scanf("%c",&a[i]);
}
a[4]=b[4];
for(i=0;i<4;i++)
{
printf("\t%c",&b[i]);
}
getch();
}
