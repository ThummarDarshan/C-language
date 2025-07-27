/*
	NESTED-20 FOR LOOP
	12345
	 1234
	  123
	   12
	    1
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5 ; i>=1 ; i--)
	{
		for(j=1 ; j<=6-i ; j++)
		{
			printf(" ");
		}
		for(j=1 ; j<=i ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}