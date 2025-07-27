/*  /* 3 VALUE MIN LOGICAL MIN

Logical operator
1. && Logical AND
2. || Logical OR
3. ! logical NOT

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n\t Enter A=");
	scanf("%d",&a);
	printf("\n\t Enter B=");
	scanf("%d",&b);
	printf("\n\t Enter C=");
	scanf("%d",&c);
	if(a<b && a<c)
	{
		printf("\n\t A is min");
	}
	else if(b<c)
	{
		printf("\n\t B is min");
	}
	else
	{
		printf("\n\t C is min ");
	}


	getch();
}