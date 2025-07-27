// 1 to n odd and even  while loop
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
		if(i%2==1)
		{
			printf("\nThe number is odd=%d",i);
		}
		i++;
	}while(i<=a);
	getch();
}