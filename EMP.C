#include<stdio.h>
#include<conio.h>
struct emp
{
	int id,salary;
	char name[50];
};
void main()
{
	int no,i;
	emp e[50];

	clrscr();
	printf("Enter employee : ");
	scanf("%d",&no);
	for(i=0;i<=no;i++)
	{
		gets(e[i].name);
	}
	printf("-----Employee details------ \n");
	for(i=0;i<=no;i++)
	{
		printf("name = %s",e[i].name);
	}

	getch();
}