// NENSTAND-1 FOR LOOP
/*
	1
	12
	123
	1234
	12345
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
			printf("%d",j);
		}
		printf("\n");
	}


	getch();
}