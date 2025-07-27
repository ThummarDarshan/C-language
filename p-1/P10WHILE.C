// NUMBER COUNT


#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c=0;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
     /*	while(a>0)
	{
		a=a/10;
		c++;
	}     */

	do
	{

		a=a/10;
		c++;
	}while(a>0);


		printf("the digit number is=%d",c);

	getch();

}