#include<iostream.h>
#include<conio.h>
class ebill
{
	public :
	float a,bill,tbill;
};
void main()
{
	ebill eb;
	clrscr();
	cout<<"Enter the unit number=";
	cin>>eb.a;
	if(eb.a<=50)
	{
		eb.bill=eb.a*0.5;
	}
	else if(eb.a>=51 && eb.a<=150)
	{
		eb.bill=(eb.a-50)*.75+25;
	}
	else if(eb.a>=151 && eb.a<=250)
	{
		eb.bill=(eb.a-150)*1.2+100;
	}
	else
	{
		eb.bill=(eb.a-250)*1.5+220;
	}
	cout<<eb.bill;
	eb.tbill=(eb.bill*20/100)+eb.bill;
	cout<<"\n"<<"total bill="<<eb.tbill;
	getch();
}