// ascii value find to user defind string

#include<stdio.h>
#include<conio.h>
void main()
{
	char a[200];
	int co=0,i;
	clrscr();
	printf("Enter the string=");
	gets(a);
	for(i=0 ; a[i]!='\0' ; i++)
	{
		co++;
	}
	printf("\t%d\n",co);
	for(i=0 ; i<co ; ++i)
	{
		printf("the as\cii value of %c= %d\n",a[i],a[i],a[i]);
	}
	getch();
}