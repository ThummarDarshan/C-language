#include<iostream.h>
#include<conio.h>
class armstrong
{
	public:
	int a,i,r,n;
};
void main()
{
	armstrong A;
	clrscr();
	cout<<"Enter the Number= ";
	cin>>A.a;
	A.n=A.a;
	for(A.i=0;A.a>0;)
	{
		A.r=A.a%10;
		A.i=A.i+(A.r*A.r*A.r);
		A.a=A.a/10;
	}
	cout<<A.i;
	if(A.i==A.n)
	{
		cout<<"\n"<<"The number is armstrong";
	}
	else
	{
		cout<<"\n"<<"The number is not a armstrong" ;
	}
	getch();
}