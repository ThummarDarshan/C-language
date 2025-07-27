//n1 to n2 odd and even  while loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter the n1=");
	scanf("%d",&n1);
	printf("Enter the n2=");
	scanf("%d",&n2);
	do
	{
		if(n1%2==1)
		{
			printf("\nThe number is odd=%d",n1);
		}
		n1++;
	}while(n1<=n2);
	getch();
}