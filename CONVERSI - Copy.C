#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double mm,cm,m,km;
int choice;
clrscr();
printf("Implementation of Coversion of mm to all km\n");
printf("Enter the conversion you want:1.MM to all\t2.Cm to all\t3.Metre to all,4.Kilo metre to all\n");
printf("Enter the choice you want:");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("Enter the milli metre value");
	scanf("%d",&mm);
	cm=mm/10;
	m=cm/100;
	km=m/1000;
	printf("The mm is converted into Cm:%d\t,metre:%d\t,Kilo metre :%d",&cm,&m,&km);
	break;
 case 2:
	printf("Enter the centi metre value");
	scanf("%d",&cm);
	mm=cm*10;
	m=cm*100;
	km=m*1000;
	printf("The mm is converted into mm:%d\t,metre:%d\t,Kilo metre :%d",&mm,&m,&km);
	break;
 case 3:
	printf("Enter the metre value");
	scanf("%d",&m);
	cm=m*100;
	mm=cm*10;
	km=m/1000;
	printf("The Metre is converted into cm:%d\t,milli metre:%d\t,Kilo metre :%d",&cm,&mm,&km);
	break;
 case 4:
	printf("Enter the kilo metre value");
	scanf("%d",&m);
	m=km/1000;
	cm=m/100;
	mm=cm/10;
	printf("The kilo Metre is converted into metre:%d\t,centi metre:%d\t,milli metre :%d",&m,&cm,&mm);
	break;
 default:
	printf("there is no choice");
	break;
}
getch();
}










