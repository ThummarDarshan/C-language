#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("\n Enter A=");
	scanf("%d",&a);
	printf("\n Enter B=");
	scanf("%d",&b);
	printf("\n Enter C=");
	scanf("%d",&c);
	printf("\n Enter D=");
	scanf("%d",&d);
	printf("\n Enter E=");
	scanf("%d",&e);                                       F
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
			      if(a<e)
			      {
					printf("A is min");
			      }
			      else
			      {
				       printf("E is min");
			      }
			}
			else
			{
				if(d<e)
				{
					printf("D is min");
				}
				else
				{
					printf("E is min");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is min");
				}
				else
				{
					printf("E is min");
				}
			}
			else
			{
				 if(d<e)
				 {
					printf("D is min");
				 }
				 else
				 {
					printf("E is min");
				 }
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("\n\t B is min");
				}
				else
				{
				       printf("\n\t E is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("\n\t D is min");
				}
				else
				{
					printf("\n\t E is min");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
				      printf("\n\t C is min");
				}
				else
				{
					printf("\n\t E is min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("\n\t D is min");
				}
				else
				{
					printf("\n\t E us min");
				}
			}
		}
	}



	getch();
}