
// SATIK VAKUE AARAY REVERS

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={12,13,14,15,16},i,temp;
	clrscr();
	for(i=0;i<5 ; i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
	}
	for(i=0 ; i<5 ; i++)
	{
		temp=a[i];
		a[i]=a[5-1-i];
		a[5-1-i]=temp;
	}
	for(i=0 ; i<5 ; i++)
	{
		printf("\t a[%d]=%d\n",i,a[5-1-i]);
	}
	getch();
}
