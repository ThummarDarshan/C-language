#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("Enter Age=");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\n\tYou Are Elegebal To Give Vote");
	}
	else
	{
		printf("\n\tYou Are Not Elegebal To Give Vote");
	}

	getch();
}