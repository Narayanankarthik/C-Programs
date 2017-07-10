#include<stdio.h>
#include<conio.h>
void main()
{
int i,fact,frst,factorial;
clrscr();
printf("Enter the number to find factorial:");
scanf("%d",fact);
for(i=0;i<fact;i++)
{
frst=fact;
if(frst==fact)
{
printf("we are going to find factorial for fact=%d",frst);
}
else
{
--frst;
factorial=fact*frst;
printf("%d",fact);
}
}
getch();
}
