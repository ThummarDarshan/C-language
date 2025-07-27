// total number of upper ,lower and secial caracter

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i,u=0,l=0,s=0,sp=0;
	clrscr();
	printf("Enter the string=");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		// upper case
		if(str[i]>='A'&&str[i]<='Z')
		{
			u++;
		}
		//lower case
		else if(str[i]>='a' && str[i]<='z')
		{
			l++;
		}
		//special case
		else if(str[i]==' ')
		{
			s++;
		}
		else
		{
			sp++;
		}
	}
	printf("\n upper case lettre=%d",u);
	printf("\n lower case letter=%d",l);
	printf("\n space case letter=%d",s);
	printf("\n special case letter=%d",sp);
	getch();
}       \
