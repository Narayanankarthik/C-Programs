#include<stdio.h>
void main()
{
int *p;
int b=12;
*p=b;
clrscr();
printf("%d %d\n",b,&b);
printf("%d\n",&p);
printf("%d\n",p);
printf("%d\n",*p);
getch();
}