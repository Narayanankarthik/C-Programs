
#include<stdio.h>
void main()d
	{
	static int var = 5;
	clrscr();
	printf("%d ",var--);
	if(var)
	{
		main();
		}
		getch();
	}
