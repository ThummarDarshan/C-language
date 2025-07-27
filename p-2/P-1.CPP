// 1 to n while loop c++
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,i=1;
	clrscr();
	cout<<"Enter the number=";
	cin>>a;
	do
	{
	       cout<<i<<"\n";
		i++;
	}while(i<=a);
	getch();
}