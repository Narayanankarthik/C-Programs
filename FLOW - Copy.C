#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
	  for(j=1;j<5;j++)
	  {
	      printf("%d\n",j);
	    if(j==1 || j!=2)
	    {
	       printf("%d\t%d",j,++j);
	    }
	  }
	}
	getch();
}

