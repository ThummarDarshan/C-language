//a-12 REPLASEOLD VALUE WITH NEW VALUE in array


#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,rp,item,j,f=0;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the replace number=");
	scanf("%d",&rp);
	printf("Enter the new item you want to insert=");
	scanf("%d",&item);

	for(i=0 ; i<n ; i++)
	{
		if(a[i]==rp)
		{
			for(j=i ; j<n ;j++)
			{
				a[j]=a[j+1];
				f=1;
				i--;
				n--;

				a[j]=a[j-1];

				a[j]=item;
				j++;

			}
			n++;
		}
	}
	if(f==0)
	{
		printf("not possibal ");
	}
	else
	{
		if(n==0)
		{
			printf("error");
		}
		else
		{

			for(i=0 ; i<n ; i++)
			{
				printf(" \t%d\n",a[i]);
			}

		}
	}



	getch();
}


