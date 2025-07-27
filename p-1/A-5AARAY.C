// one AARAY take valu and print in scond aaray

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],n,i;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&b[i]);
	}


	for(i=0;i<n;i++)
	{
		printf("\tb[%d]=%d\n",i,b[i]);
	}


	getch();
}