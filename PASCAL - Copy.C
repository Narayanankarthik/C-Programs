#include<stdio.h>
#include<conio.h>
void main()
{
int noline,i,j,temp;
clrscr();
printf("\nEnter the number of lines to print");
scanf("%d",&noline);
for(i=1;i<=noline;i++)
{
	for(j=1;j<=noline-i;j++)
	{
		printf("");
		temp=i;
	for(j=1;j<i;j++)
	{
		printf("%4d",temp++);
		temp=temp-2;
	for(j=1;j<i;j++)
	{
		printf("%4d",temp--);
	}
      }
      }
}
getch();
}