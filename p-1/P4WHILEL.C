
// 1 to n sum while loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=1,sum=0;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	do
	{
		printf("%d\n",i);
		i++;
		sum=sum+i;
	}while(i<=a);
	printf("sum=%d",sum);
	getch();
}