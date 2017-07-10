#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char str[]="Computer";
	int n,i;
	for(i=0;i<=strlen(str);i++)
	{
		cout.write(str,i);
		cout<<"\n";
	}
		cout<<"\n\n";
		getch();
}