//SUM OF NUMBER DO WHILE LOOP
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);
	do
	{
		r=n%10; //r=6 r=5  4
		sum=sum+r;//sum=6 sum=11 15
		n/=10; // n=n/10 45  4  0

	}while(n>0);

	printf("sum=%d",sum);

	getch();
}