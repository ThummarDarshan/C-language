// n1 to n2 while loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,i=1;
	clrscr();
	printf("Enter the n1=");
	scanf("%d",&n1);
	printf("Enter the n2=");
	scanf("%d",&n2);
	do
	{
		printf("%d\n",n1);
		n1++;
	}while(n1<=n2);
	getch();
}