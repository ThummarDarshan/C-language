/*
 NENSTAND-3 FOR LOOP
	1
	21
	321
	4321
	54321
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
			printf("%d",i-j+1);
		}
		printf("\n");
	}
	getch();
}