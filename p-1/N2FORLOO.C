// NENSTAND-2 FOR LOOP
/*
	1
	22
	333
	4444
	55555
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++) // row
	{
		for(j=1;j<=i;j++) // column
		{
			printf("%d",i);
		}
		printf("\n");
	}


	getch();
}