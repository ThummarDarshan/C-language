// NENSTAND-6 FOR LOOP
/*
	1
	23
	456
	78910
	1112131415
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
			a++;
		}
		printf("\n");
	}
	getch();
}