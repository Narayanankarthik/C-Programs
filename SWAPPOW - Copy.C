#include<stdio.h>
#include<conio.h>
void main()
{
int a=2;int b=1;
clrscr();
a=a^b;
b=a^b;
a=b^a;
printf("%d\t%d\n",a,b);
printf("%d\t%d",sizeof(a,b));
getch();
}

