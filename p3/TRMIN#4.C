/*TRNARRY FOUR VALUE MIN */

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

	(a<b) ? (a<c) ? (a<d) ? printf("A is min") : printf("D is min") : (c<d) ? printf("C is min") : printf("D is min") : (b<c) ? (b<d) ? printf("B is min") : printf("C is min") : (c<d) ? printf("C is min") : printf("D is min");

	getch();
}