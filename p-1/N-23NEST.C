/*
	NESTED-23 FOR LOOP
	10101
	 1010
	  101
	   10
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
			printf("%d",j%2);
		}
		printf("\n");
	}
	getch();
}