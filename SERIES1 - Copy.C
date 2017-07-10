#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<10000;i++)
	{
		if(i%8==0)
		{
			printf("\t%d",i);
		}
	}
		getch();
}
