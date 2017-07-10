#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int i,fact=1;
  int num=5;
  clrscr();
	for(i=0;i<num;i++)
	{
	  fact=fact*i;
	}
	if(fact==120)
	{
	 printf("%d",&fact);
	}
}
