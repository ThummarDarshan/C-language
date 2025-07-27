// NENSTAND-8 FOR LOOP
/*
	1
	35
	7911
	13151719
	2123252729
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
			printf("\t%d",a);
			a=a+2;
		}
		printf("\n");
	}
	getch();
}