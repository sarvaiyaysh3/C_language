#include<stdio.h>
#include<conio.h>
void main()
{
  int a[80][80],i,j,row,col,sum=0;
  clrscr();
  printf("Enter the size of Rows :");
  scanf("%d",&row);
  printf("\nEnter the size of columns :");
  scanf("%d",&col);
  printf("\nEnter the matrix Elements :\n");
  for (i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<row;i++)
  {
    sum=sum+a[i][i];
    }
    printf("\nThe sum ohf diagonal elements of a matrix : %d",sum);
    getch();
  }