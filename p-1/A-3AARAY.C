// USER PASE THI VALUE LEVI AARAY

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}


	for(i=0;i<n;i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
	}


	getch();
}