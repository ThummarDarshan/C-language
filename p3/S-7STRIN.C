// ascii valu of string

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i=0,co=0;
	clrscr();
	printf("Enter the string=");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		co++;
	}
	printf("\t%d\n",co);
	for(i=0;i<co;++i)
	{
			printf("The ascii value of %c=%d\n",str[i],str[i]);
	}
	getch();
}
