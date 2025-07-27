/*
	NESTED-24 FOR LOOP
	10101
	 0101
	  010
	   10
	    1
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	for(i=1,a=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf(" ");
		}
		for(j=6-i ; j>=1 ; j--)
		{
			printf("%d",a%2);
			a++;
		}
		printf("\n");
	}
	getch();
}

