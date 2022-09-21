#include<stdio.h>
#include<conio.h>
void main()
{
   char a[50],i;
   clrscr();
   printf("enter the string");
   gets(a);
   for(i= 0 ; i <= 5 ; i++)
   {
       scanf("%s",&a[i]);
   }
   for(i = 0 ; i <= 5 ; i++)
   {
       printf("%c",a[i]);
   }
   getch();
}