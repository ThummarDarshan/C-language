/*TRNARRY FIVE VALUE MIN */

#include<stdio.h>
#include<conio.h>
void main()

{
	int a,b,c,d,e;
	clrscr();
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	printf("Enter C=");
	scanf("%d",&c);
	printf("Enter D=");
	scanf("%d",&d);
	printf("Enter E=");
	scanf("%d",&e);

	(a<b) ? (a<c) ? (a<d) ? (a<e) ? printf("A is min") : printf("E is min") : (d<e) ? printf("D is min") : printf("E is min") : (c<d) ? (c<e) ? printf("C is min") : printf("E is min") : (d<e) ? printf("D is min") : printf("E is min") : (b<c) ? (b<d) ? (b<e) ? printf("B is min") : printf("E is min") : (d<e) ? printf("D is min") : printf("E is min") : (c<d) ? (c<e) ? printf("C is min") : printf("E is min") : (d<e) ? printf("D is min") : printf("E is min");



	getch();
}