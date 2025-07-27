// NENSTAND-7 FOR LOOP
/*
	2
	46
	81012
	14161820
	22242628390
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	for(i=1,a=2 ; i<=5 ; i++)
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