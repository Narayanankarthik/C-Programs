#include<stdio.h>
#include<conio.h>
#include<Time.h>
void main()
{
int i,sec,min,hours;
clrscr();
sec=60;
for(i=1;i<=sec;i++)
{
printf("hours:\t mins:\t secs:%d\t",&i);
if(sec==60)
{
min=1;
printf("hours:\t mins:%d\t secs:\t",&min);
}
else if(min==60)
{
min=0;
hours=1;
printf("hours:%d\t mins:%d\t secs:\t",&hours,&min);
}
}
getch();
}


