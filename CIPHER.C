#include<stdio.h>
#include<conio.h>
void main()
{
int a[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25},i;
char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int k[26],j,l;
clrscr();
k[26]=c[26]==a[26];
for(j=0;j<26;j++)
{
printf("%c\t",k[j]);
}


getch();
}
