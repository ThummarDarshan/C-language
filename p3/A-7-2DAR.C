//a-7 two array take from user and murch in three array 2d array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],b[4][4],i,j,c[4][4];
	clrscr();

	printf("Enter the frist array\n");
	for(i=0 ;i<3 ;i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			c[i][j]=a[i][j];
		}
	}

	printf("Enter the second array\n");
	for(i=0 ;i<3 ;i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
			c[i+3][j]=b[i][j];
		}
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tmerg[%d][%d]=%d\n",i,j,c[i][j]);
		}
	}

	getch();
}