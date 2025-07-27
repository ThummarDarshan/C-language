/*
	NESTED-16 FOR LOOP
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
	int i,j,a;
	clrscr();
	for(i=1 ; i<=5 ; i++)
	{
		for(j=6-i ; j>=1 ; j--)
		{
			printf(" ");

		}
			for(j=1 ; j<=i ; j++ )
			{
				printf("%d",j);
			}
		printf("\n");
	}
	getch();
}