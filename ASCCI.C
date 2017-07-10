#include<stdio.h>
void main()
{
int i;
clrscr();
for(i=0;i<5;i++)
{
printf("%c\n",~('B'*-1));
}
getch();
}