/*
	NESTED-21 FOR LOOP
	12345
	 2345
	  345
	   45
	    5
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
			printf(" ");
		}
		for(j=i ; j<=5 ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}