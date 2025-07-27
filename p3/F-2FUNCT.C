// with argument and no return type

#include<stdio.h>
#include<conio.h>
void sum(int a,int b)
{

	clrscr();
	printf("the addition is=%d",a+b);
	printf("\nthe subtraction is=%d",a-b);
	printf("\nthe multiplication is=%d",a*b);
	printf("\nthe division is=%d",a/b);
}
void main()
{
	sum(100,20);
	getch();
}