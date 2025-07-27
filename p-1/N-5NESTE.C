// NENSTAND-5 FOR LOOP
/*
	5
	45
	345
	2345
	12345
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0 ; i<=5 ; i++)
	{
		for(j=5-i ; j<=i ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}