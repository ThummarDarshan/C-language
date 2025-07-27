// deseding sorting array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,temp;
	clrscr();
	printf("Enter the idex number=");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<n-1 ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(a[i]<a[j])
			{
			 temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;
			}
		}
	}
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",a[i]);
	}

	getch();
}