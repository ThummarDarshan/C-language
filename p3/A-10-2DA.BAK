// a-11 20-d array search value from array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,max;
	clrscr();
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			max=a[i][j];
		}
	}

	for(i=0,max=-300 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}

		}
	}
	printf("The max value is =%d",max);
	getch();
}