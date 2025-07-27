
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
	eb.bill=eb.a*7.5;

	cout<<"bill with out tax="<<eb.bill;
	eb.tbill=(eb.bill*5/100)+eb.bill;
	cout<<"\n"<<"total bill="<<eb.tbill;
	if(eb.bill>=800)
	{
		cout<<"\n "<<"The bill is very high";
	}
	else
	{
		cout<<"\n"<<"Tne bill is fair";
	}
	getch();
}