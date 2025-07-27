// count lenth of alpabets string

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i,a=0;
	clrscr();
	printf("Enter the string=");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			a++;
		}
	}
	printf("\t%d",a);
	getch();
}