/*
	NESTED-18 FOR LOOP
		5
	       54
	      543
	     5432
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
		for(j=6-i ; j>=1 ; j--)
		{
			printf(" ");
		}
		for(j=5 ; j>=6-i ; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}