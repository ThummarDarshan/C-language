/*TRNARRY FOUR VALUE MAX */

#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c,d;
	clrscr();
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	printf("Enter C=");
	scanf("%d",&c);
	printf("Enter D=");
	scanf("%d",&d);

	(a>b) ? (a>c) ? (a>d) ? printf("A is max") : printf("D is max") : (c>d) ? printf("C is max") : printf("D is max") : (b>c) ? (b>d) ? printf("B is max") : printf("C is max") : (c>d) ? printf("C is max") : printf("D is max");

	getch();
}