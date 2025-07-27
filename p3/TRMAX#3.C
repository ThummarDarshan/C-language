/*TRNARRY THREE VALUE MAX */

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
	(a>b) ? (a>c) ? printf("A is max") : printf("B is max") : (b>c) ? printf("B is max") : printf("C is max");


	getch();
}