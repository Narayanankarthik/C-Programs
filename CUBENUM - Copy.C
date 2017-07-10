#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum;
clrscr();
printf("Enter the sum of cube of natural numbers:\t");
scanf("%d",&n);
sum=(n*(n+1)/2)*(n*(n+1)/2);
printf("\nthe sum is %d",sum);
getch();
}
