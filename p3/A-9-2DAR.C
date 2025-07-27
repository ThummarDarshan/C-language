//a-9sum of two array 2d array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,sum=0;
	clrscr();

	printf("Enter the frist array");
	for(i=0 ;i<3 ;i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);

		}
	}

	  for(i=0 ;i<3 ;i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		sum=sum+a[i][j];
		}

	}
	printf("\ttotal sum=%d\n",sum);
	getch();
}