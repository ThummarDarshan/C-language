#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	printf("Enter C=");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("\n A is min");
		}
		else
		{
			printf("\n C is min");
		}
	}
	else
	{
		if(b<c)
		{
			printf("\n B is min");
		}
		else
		{
			printf("\n C is min");

		}
	}

	getch();
}