/* PROJECT-1 ELECTRICITY BILL */


#include<stdio.h>
#include<conio.h>
void main()
{
	float a,Bill,tbill;
	clrscr();
	printf("\n\t Enter Number Of Unit=");
	scanf("%f",&a);
	if(a<=50)
	{
		Bill=a*0.5;

	}
	else if(a>=51 && a<=150)
	{
		Bill=(a-50)*.75+25;
	}
	else if(a>=151 && a<=250)
	{
		Bill=(a-150)*1.2+100;
	}
	else
	{
		Bill=(a-250)*1.5+220;
	}

	printf("\n\t B=%.2f",Bill);

	tbill=(Bill*20/100)+Bill;

	printf("\n\t Total Bil=%.2f",tbill);


	getch();
}