
//a-5 2d array  copy case

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[4][4],b[4][4];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
      /*	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		a[i][j]=b[i][j];
		}
	}*/

	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]=%d\n",i,j,a[i][j]);
		}
	}

	getch();
  }