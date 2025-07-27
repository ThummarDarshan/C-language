#include<iostream.h>
#include<conio.h>
class palidrom
{
	public:
	int a,i,r,n;
};
void main()
{
	palidrom p;
	clrscr();
	cout<<"Enter the Number= ";
	cin>>p.a;
	p.n=p.a;
	for(p.i=0;p.a>0;)
	{
		p.r=p.a%10;
		p.i=p.i*10+p.r;
		p.a=p.a/10;
	}
	cout<<p.i;
	if(p.i==p.n)
	{
		cout<<"\n"<<"The number is palidram";
	}
	else
	{
		cout<<"\n"<<"The number is not a palidram" ;
	}
	getch();
}