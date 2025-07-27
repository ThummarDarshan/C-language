/* 5 VALUE  LOGICAL MAX */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("\n\t Enter A=");
	scanf("%d",&a);
	printf("\n\t Enter B=");
	scanf("%d",&b);
	printf("\n\t Enter C=");
	scanf("%d",&c);
	printf("\n\t Enter D=");
	scanf("%d",&d);
	printf("\n\t Enter E=");
	scanf("%d",&e);
	if(a>b && a>c && a>d && a>e)
	{
		printf("\n\t A is max");
	}
	else if(b>c && b>d && b>e)
	{
		printf("\n\t B is max");
	}
	else if(c>d && c>e)
	{
		printf("\n\t C is max");
	}
	else if(d>e)
	{
		printf("\n\t D is max");
	}
	else
	{
		printf("\n\t E is max");
	}

	getch();
}