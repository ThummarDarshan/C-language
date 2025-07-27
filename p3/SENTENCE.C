//sentence case string


#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str[100];
	clrscr();
	printf("Enter a string=");
	gets(str);


	if(str[0]>='a'&& str[0]<='z')
	{
		str[0]-=32;
	     for(i=1; str[i]!='\0'; i++)
	     {
		   if(str[i]>='A'&& str[i]<='Z')
		   {
			   str[i]+=32;
		   }

	     }
	     printf("\n new string=%s",str);

	}


	getch();
}
