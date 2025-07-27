// a-13 2-darray insert array


#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,r,c,item;
	clrscr();
	for(i=0 ;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the replace row posstion=");
	scanf("%d",&r);
	printf("Enter the colume posstion=");
	scanf("%d",&c);
	printf("Enter the insert item=");
	scanf("%d",&item);
	for(i=2;i>=r;i--)
	{
		for(j=2;j>=c;j--)
		{
			a[i][j]=a[i-1][j-1];
		}
	}
	a[r][c]=item;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d\n",a[i][j]);
		}
	}
	getch();
}