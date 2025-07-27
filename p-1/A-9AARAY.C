// two aaray merch in one aaray without three variabal

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],i,n1,n2;
	clrscr();
	printf("Enter the index n1=");
	scanf("%d",&n1);
	for(i=0 ; i<n1 ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("Enter the idex n2=");
	scanf("%d",&n2);
	for(i=0 ; i<n2 ; i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
		a[i+n1]=b[i];
	}
	for(i=0 ; i<n1+n2 ; i++)
	{
		printf("\tmer[%d]=%d\n",i,a[i]);
	}
	getch();
}