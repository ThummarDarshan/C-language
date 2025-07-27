// a-11 20-d array search value from array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,s,te=0;
	clrscr();
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the search number=");
	scanf("%d",&s);
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			if(s==a[i][j])
			{
			      printf("\n\tData is found");
			      break;

			}
			else
			{
				printf("\n data is not found");
			}
		}
	}

	getch();
}