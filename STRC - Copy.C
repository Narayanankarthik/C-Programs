#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char n1[10],n2[10];
int i,j;
clrscr();
for(i=0;i<10;i++)
{
scanf("%c",&n1[i]);
}
for(j=0;j<10;j++)
{
scanf("%c",&n2[j]);
}
if(n1[10]==n2[10])
{
printf("\nyes");
}
getch();

}