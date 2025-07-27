/* POSITEVE AND NAGETIVE AND ZERO VALUYE 	NESTED IF  */
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
	else
	{
		if(a==0)
		{
			printf("\n\t A is ZERO");
		}
		else
		{
			printf("\n\t A is posstive");
		}
	}



	getch();
}