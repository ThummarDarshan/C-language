#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,dle,f=0,w,x;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the delete number=");
	scanf("%d",&dle);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==dle)
			{
				for(w=i;w<2;w++)
				{
					for(x=j;x<3;x++)
					{
						a[w][x]=a[w][x+1];
						f=1;
					     //	i++;
					     //	j++;
					}

				}
			}
		}
	}
	if(f==0)
	{
		printf("Not possibal");
	}
	else
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("\t%d\n",a[i][j]);
			}
		}
	}
	getch();
}
