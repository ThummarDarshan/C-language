/* 4 VALUE MIN LOGICAL MIN   */


#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\n\t Enter A=");
	scanf("%d",&a);
	printf("\n\t Enter B=");
	scanf("%d",&b);
	printf("\n\t Enter C=");
	scanf("%d",&c);
	printf("\n\t Enter D=");
	scanf("%d",&d);
	if(a<b && a<c && a<d)
	{
		printf("\n\t A is min");
	}
	else if(b<c && b<d)
	{
		printf("\n\t B is min");
	}
	else if(c<d)
	{
		printf("\n\t C is min");
	}
	else
	{
		printf("\n\t D is min");
	}

	getch();
}