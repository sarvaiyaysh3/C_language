#include<stdio.h>
#include<conio.h>
void main()
{
	int st,en,cnt=0,cnt1=0;
	clrscr();
	printf("Enter no start : ");
	scanf("%d",&st);
	printf("Enter no end : ");
	scanf("%d",&en);

	while(st<en)
	{
		cnt++;
		st++;
	}
	while(st<en)
	{
		cnt1++;
		st++;
	}
	printf("1st while loop : %d",cnt);
	printf("2nd while loop : %d",cnt1);
	getch();
}