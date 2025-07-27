#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	cout<<"n=";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	getch();
}