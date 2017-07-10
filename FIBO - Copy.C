#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b,i,n,c;
clrscr();
printf("\nEnter the series for fibo series \n");
scanf("%d",&n );
for(i=0;i<n;i++)
{
b=a+i;
printf("%d\t",b);
c=a-i;
printf("%d\t",c);
}
getch();

}

