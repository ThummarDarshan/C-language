#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\n Enter A=");
	scanf("%d",&a);
	printf("\n Enter B=");
	scanf("%d",&b);
	printf("\n Enter C=");
	scanf("%d",&c);
	printf("\n Enter D=");
	scanf("%d",&d);
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("A is min");
			}
			else
			{
				printf("B is min");
			}
		}
		else
		{
			if(c<d)
			{
				printf("C is min");
			}
			else
			{
				printf("D is min");
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				printf("B is min");
			}
			else
			{
				printf("D is min");
			}
		}
		else
		{
			if(c<d)
			{
				printf("C is min");
			}
			else
			{
				printf("D is min");
			}
		}
	}


	getch();
}