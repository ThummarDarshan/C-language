// two aaray merge in one aaray

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],n1,n2,i,c[10];
	clrscr();
	printf("Enter the frist index number=");
	scanf("%d",&n1);
	for(i=0 ; i<n1 ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}

	printf("Enter the second index number=");
	scanf("%d",&n2);
	for(i=0 ; i<n2 ; i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
		c[i+n1]=b[i];

	}


	for(i=0 ; i<n1+n2 ; i++)
	{
		printf("\tmer[%d]= %d\n",i,c[i]);
	}
	getch();
}