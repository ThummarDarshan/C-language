/*
   a=b  c dif
				  a=b=c
				  c=b a diff
				  a=c b diff
				  abc diff
				  a<
				  a> b<

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("\n Enter A=");
	scanf("%d",&a);
	printf("\n Enter B=");
	scanf("%d",&b);
	printf("\n Enter C=");
	scanf("%d",&c);
	if(a==b)
	{
		if(a==c)
		{
			printf("\n\t a,b,c are equal");

		}
		else
		{
			printf("\n\t C is diff and a,b are equal");
				if(a<c)
				{
					printf("\n\t A is min");
				}
				else
				{
					printf("\n\t C is min");
				}
		}
	}
	else
	{
		if(b==c)
		{
			printf("\n\t A is diff and b,c are equal");
				if(a<b)
				{
					printf("\n\t A is min");
				}
				else
				{
					printf("\n\t B is min");
				}
		}
		else
		{
			if(a==c)
			{
			       printf("\n\t a,c are equal");
				if(a<c)
				{
					printf("\n\t a is min");
				}
				else
				{
					printf("\n\t c is min");
				}
			}
			else
			{

				printf("\n\t a,b,c are nmot eqale");
				if(a<b)
				{
					if(a<c)
					{
						printf("\n\t A is min");
					}
					else
					{
						printf("\n\t C is min");
					}
				}
				else
				{
					if(b<c)
					{
						printf("\n'\t B is min");
					}
					else
					{
						printf("'\n\t C is min");
					}
				}
			}
		}
	}


	getch();

}