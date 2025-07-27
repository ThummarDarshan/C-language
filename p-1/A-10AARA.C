// sum of input in aaray value

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,sum;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0,sum=0 ; i<n ; i++)
	{
		sum=sum+a[i];
	}
	printf("total sum=%d",sum);
	getch();
}