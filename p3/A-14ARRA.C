//a-14 deleat a value in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,dle,f=0;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the delete number=");
	scanf("%d",&dle);
	for(i=0 ; i<n ; i++)
	{
		if(a[i]==dle)
		{
			for(j=i; j<n+1 ; j++)
			{
				a[j]=a[j+1];
				f=1;
				i--;
				n--;

			 }
			 n++;

		}
	}
	 if(f==0)
	{
		printf("Not possibal");
	}
	else
	{
		if(n==0)
		{
			printf("error");
		}
		else
		{
			for(i=0 ; i<n; i++)
			{
				printf("\t%d\n",a[i]);
			}
		}

	}




	getch();
}