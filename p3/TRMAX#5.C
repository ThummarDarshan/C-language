
/*TRNARRY FIVE VALUE MAX */

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


	(a>b) ? (a>c) ? (a>d) ? (a>e) ? printf("A is max") :  printf("E is max") : (d>e) ? printf("D is max") : printf("E is max") : (c>d) ? (c>e) ? printf("C is max") : printf("E is max") : (d>e) ? printf("D is max") : printf("E is max") : (b>c) ? (b>d) ? (b>e) ? printf("B is max") : printf("E is max") : (d>e) ? printf("D is max") : printf("E is max") : (c>d) ? (c>e) ? printf("C is max") : printf("E is max") : (d>e) ? printf("D is max") : printf("E is max");

	getch();

 }