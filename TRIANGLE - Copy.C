#include<stdio.h>
void main()
{
int i,j,row;
clrscr();
printf("Enter the rows to print");
scanf("%d\t",&row);
for(i=0;i<=row;i++)
{
for(j=0;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}
