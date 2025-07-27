/*
	NESTED-9 FOR LOOP
	1
	10
	101
	1010
	10101
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	getch();
}