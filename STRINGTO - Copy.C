#include<stdio.h>
#include<conio.h>
void main()
{
char Str[10];
int n,i;
clrscr();
printf("Enter the no of char to type:");
scanf("%d",&n);
printf("Enter the string to print:");
for(i=0;i<n;i++)
{
scanf("%c",Str[i]);
}
for(i=0;i<strlen(Str);i++)
{
if(i==0)
{
printf("%c\n",Str[i]);
}
if(i==1)
{
printf("%c%c\n",Str[i-1],Str[i]);
}
if(i==2)
{
printf("%c%c%c\n",Str[i-2],Str[i-1],Str[i]);
}
if(i==3)
{
printf("%c%c%c%c\n",Str[i-3],Str[i-2],Str[i-1],Str[i]);
}
if(i==0)
{
printf("%c%c%c%c%c\n",Str[i-4],Str[i-3],Str[i-2],Str[i-1],Str[i]);

}
}
getch();
}



