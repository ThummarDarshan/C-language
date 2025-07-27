// PALINDROME NUMBER FOR LOOP

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,r,n;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	n=a;
	for(i=0;a>0;)
	{
		r=a%10;
		i=i*10+r;
		a=a/10;
	}
	printf("%d \n",i);
		if(i==n)
		{
			printf("The number is  palindrome");
		}
		else
		{
			printf("The number is not palindrome");
		}

	getch();
}