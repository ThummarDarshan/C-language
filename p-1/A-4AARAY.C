
// USER PASE THI VALUE LEVI REVERSE AARAY

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,temp;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("\ta[%d]=%d\n",i,a[n-1-i]);
	}


	getch();
}
