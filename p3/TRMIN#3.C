/*TRNARRY THREE VALUE MIN */

#include<stdio.h>
#include<conio.h>
void main()

{
	int a,b,c;
	clrscr();
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	printf("Enter C=");
	scanf("%d",&c);
	(a<b) ? (a<c) ? printf("A is min") : printf("B is min") : (b<c) ? printf("B is min") : printf("C is min");


	getch();
}