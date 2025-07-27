#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,r,sum;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	n=a;
	for(sum=0;n>0;)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==a)
	{
		printf("the number is armstrong");
	}
	else
	{
		printf("the number is not a armstrong");
	}

	getch();
}