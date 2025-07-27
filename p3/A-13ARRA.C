//a-13 insert new value in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,p,item;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the replace position=");
	scanf("%d",&p);
	printf("Enter the new item you want to insert=");
	scanf("%d",&item);
	for(i=n ; i>=p ; i--)
	{
		a[i]=a[i-1];
	}
	a[p]=item;
	n++;
	for(i=0 ; i<n ; i++)
	{
		printf("\t \n %d",a[i]);
	}

	getch();
}