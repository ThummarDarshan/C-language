//a-11 search value from array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,s,te=0;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the search number=");
	scanf("%d",&s);
	for(i=0 ; i<n ; i++)
	{
		if(s==a[i])
		{
			printf("\n Data is found");
			te=1;
			break;u
		}
		else
		{
			printf("\n Data is not found");
		}
	}
	getch();
}