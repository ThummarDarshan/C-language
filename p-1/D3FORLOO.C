// PRIME NUMBER FOR LOOP

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,cnt=0;
	clrscr();

	printf("Enter the number=");
	scanf("%d",&n);

	for(i=1 ; i<=n ; i++ )
	{
		if(n%i==0) // 5%1=0
		{
			cnt++;
		}
	}

		if(cnt==2)
		{
			printf("The numbre is prime");
		}
		else
		{
			printf("The number is not a prime");
		}



	getch();
}