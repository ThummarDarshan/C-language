#include<iostream.h>
#include<conio.h>
class oddeven
{
	public:
	int a;
};
void main()
{
	oddeven oe;
	clrscr();
	cout<<"Enter the number=";
	cin>>oe.a;
	if(oe.a%2==1)
	{
		cout<<"The number is odd";
	}
	else
	{
		cout<<"Tne number is even";
	}
	getch();
}