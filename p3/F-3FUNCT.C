// with argument and with return type

#include<stdio.h>
#include<conio.h>
int sum()
{
	int a,b,sum;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	sum=a+b;
	return sum;
}
void main()
{
	clrscr();
	printf("\tsum=%d",sum());
	getch();
}