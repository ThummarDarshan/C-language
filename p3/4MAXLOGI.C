/* 4 VALUE  LOGICAL MAX */
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
	if(a>b && a>c && a>d)
	{
		printf("\n\t A is max");
	}
	else if(b>c && b>d)
	{
		printf("\n\t B is max");
	}
	else if(c>d)
	{
		printf("\n\t C is max");
	}
	else
	{
		printf("\n\t D is max");
	}




	getch();
}