// a-12 20-d array repalace new  value without canging index in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,rp,item,w,x,f=0;
	clrscr();
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the search replace number=");
	scanf("%d",&rp);
	printf("Enter the new number=");
	scanf("%d",&item);
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			if(a[i][j]==rp)
			{
				for(w=i ; w<3 ; w++)
				{
					for(x=j ; w<3 ; w++)
					{
						a[w][x]=a[w+1][x+1];
						f=1;
						i--;

						a[w][x]=item;
					}
					j++;
				}
			}
		}
	}
		if(f==0)
		{
			printf("not possibal");
		}
		else
		{
			for(i=0 ; i<3 ; i++)
			{
				for(j=0 ; j<3 ; j++)
				{
					printf("\t %d\n",a[i][j]);
				}
			}
		}
		getch();
}