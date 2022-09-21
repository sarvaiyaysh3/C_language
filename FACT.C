#include<stdio.h>
#include<conio.h>
int fact(int no);
void main()
{
	int no,ans;
	clrscr();
	printf("Enter no : ");
	scanf("%d",&no);
	ans = fact(no);
	printf("Ans = %d",ans);
	getch();
}
int fact(int no=0)
{
	if(no == 0)
	{
		//return no*fact(no-1);
		return 0;
	}
	else if(no==1)
	{
		return 1;
	}
	else
	{
		return no*fact(no-1);    5 * 4 = 20
					 20 * 3 =  60
					 60 * 2 = 120
					 120 * 1 = 120
					 120 * 0 =  0
	}

}