#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	clrscr();
	fp = fopen("demo.txt");
	printf("File successfully created");
	fprintf(fp,"Hello World");
	getch();
}