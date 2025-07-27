
/* THE NUMBER TRANCFER TO 123 TO 321  */

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,r,sum=0;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
      /*	while(n>0)
	{
		r=n%10; //r=3 r=2
		sum=sum*10+r; //sum=3 sum=32
		n=n/10;// n=12  n=1
	}           */

	do
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}while(n>0);


	printf("Sum = %d",sum);

	getch();
}