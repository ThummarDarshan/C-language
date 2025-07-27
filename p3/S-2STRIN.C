// count lenth of string

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i;
	clrscr();
	printf("Enter the string=");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		printf(".");
	}

	printf("\t%d",i);
	getch();
}