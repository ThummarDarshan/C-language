//TRIANGELAREA

#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,area;
	clrscr();
	printf("Enter A=");
	scanf("%f",&a);
	printf("Enter B=");
	scanf("%f",&b);
	area=a*b/2;
	printf("\narea=%.2f",area);
	getch();
}