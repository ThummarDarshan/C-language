#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("enter the n1=");
	scanf("%d",&n1);
	printf("enter tne n2=");
	scanf("%d",&n2);
	if(n1<n2)
	{
	do
	{
		if(n1%2==1)
		{
			printf("the number odd=%d\n",n1);
		}
		n1++;
	}while(n1<=n2);
	}
	else
	{
		do
		{
			if(n2%2==0)
			{
				printf("the number even=%d\n",n2);
			}
			n2++;
		}while(n2<=n1);
	}
	getch();
}