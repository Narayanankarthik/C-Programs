#include<stdio.h>
#include<conio.h>
void main()
   {
	int i,j,rows;
	clrscr();
	printf("\nEnter the no of rows to execute:");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
	  for(j=1;j<=i;j++)
	  {
		printf("%d",j);
	   }
		 printf("\n");
	}
	getch();
   }