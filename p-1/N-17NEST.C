/*
	NESTED-16 FOR LOOP
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
	int i,j,a;
	clrscr();
	for(i=5 ; i>=1 ; i--)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf(" ");

		}
		for(j=i ; j<=5 ; j++ )
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}