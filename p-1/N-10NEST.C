/*
	NESTED-10 FOR LOOP
	1
	01
	010
	1010
	10101
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	for(i=1,a=1 ; i<=5 ; i++ )
	{
		for(j=1 ; j<=i ; j++ )
		{
			printf("\t%d",a%2);
			a++;
		}
		printf("\n");
	}
	getch();
}