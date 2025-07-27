// 1 to n while loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=1;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=a);
	getch();
}