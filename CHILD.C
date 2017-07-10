#include<stdio.h>
#include<conio.h>
void main()
	{
		clrscr();
		printf("\n exec system call");
		printf("\ndisplaying the date");
		execlp("/bin/date","date",0);
		getch();

	}