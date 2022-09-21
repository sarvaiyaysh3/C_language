#include<stdio.h>
#include<conio.h>
int fact(int no);
void main()
{

	int no;
	clrscr();
	printf("Enter no : ");
	scanf("%d",&no);
	fact(no);
	getch();
}
int fact(int no)
{
	return no * fact(no-1);
}
