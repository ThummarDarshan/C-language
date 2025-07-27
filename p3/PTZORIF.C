/* POSSTI,NAGETIVE , ZERO LEDDR IF */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n\t Enter A=");
	scanf("%d",&a);
	if(a<0)
	{
		printf("\n\t A is nagetive");
	}
	else if(a>0)
	{
		printf("\n\t A is posstive");
	}
	else
	{
		printf("\n\t A is zero");
	}

	getch();
}