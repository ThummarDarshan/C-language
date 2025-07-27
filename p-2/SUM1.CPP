#include<iostream.h>
#include<conio.h>
class sum

{
	public:
	int a,b,c;
};

void main()
{
	sum s;
	clrscr();
	cout<<"Enter the value=";
	cin>>s.a;
	cout<<"Enter the valye=";
	cin>>s.b;
	s.c=s.a+s.b;
	cout<<"total sum="<<s.c;


	getch();
}