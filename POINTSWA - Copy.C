#include<stdio.h>
void main()
{
int *a,*b;
int x=10,y=20;
clrscr();
b=&y;
printf("\nx=%d\t",*b);
a=&x;
printf("\ny=%d\t",*a);
getch();
}