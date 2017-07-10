#include<stdio.h>
#include<conio.h>
void main()
{
   int g,h,i;
   clrscr();
 printf("\nEnter the value of g:\tH:\tI:\n");
 scanf("%d%d%d",&g,&h,&i);

if(g>h && h>i)
  {
     printf("g is greater");
  }
   if(h>i && i>g)
  {
    printf("H is greater");
  }
 if(i>g && i>h)
  {
     printf("i is greater");
  }
   getch();
}



