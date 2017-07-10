#include<stdio.h>
#include<conio.h>
void main()
{
long a[100],i,k;
clrscr();
printf("Implementation of search algorithm\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the values to search\n");
scanf("%d",&k);
for(i=0;i<10;i++)
{
if(a[i]==k)
{
printf("its in the array\n");
break;
}
else
{
printf("not in the array");
break;
}

}
getch();
}



