#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
clrscr();
printf("\nEnter the number to check prime or not");
scanf("%d",&a);
for(i=1;i<a;i++)
{
if(a%i==1 && a/1==a)
{
printf("\nnumber is prime");
}
else
{
printf("\nnot prime");
}

}

getch();
}