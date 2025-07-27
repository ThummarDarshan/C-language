/* 3 VALUE  LOGICAL MAX */

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
	if(a>b && a>c)
	{
		printf("\n\t A is max");
	}
	else if(b>c)
	{
		printf("\n\t B is max");
	}
	else
	{
		printf("\n\t C is max");
	}



	getch();
}