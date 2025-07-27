#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,lrg,lrg2;
	clrscr();
	printf("Enter the index number=");
	scanf("%d",&n);
	for(i=0,lrg=0,lrg2=0 ; i<n ; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		if(lrg<a[i])
		{
			lrg=a[i];
			j=i;
		}
	}
	for(i=0 ; i<n ; i++)
	{
	    if(i==j)
	      {
			i++;
			i--;
	      }
	      else if(lrg2<a[i])
		{
			lrg2=a[i];
		}
	}
	printf("The second largest number=%d",lrg2);
	getch();
}