// stdunte result in c++


#include<iostream.h>
#include<conio.h>
struct rno
{
	int rollno,s1,s2,s3,s4,s5,total;
	float per;
};
void main()
{
	clrscr();
	struct rno r,total,per;
	cout<<"Enter the number=";
	cin>>r.rollno;
	cout<<"Enter the s1=";
	cin>>r.s1;
	cout<<"Enter the s2=";
	cin>>r.s2;
	cout<<"Enter the s3=";
	cin>>r.s3;
	cout<<"Enter the s4=";
	cin>>r.s4;
	cout<<"Enter the s5=";
	cin>>r.s5;
	r.total=r.s1+r.s2+r.s3+r.s4+r.s5;
	r.per=(float)r.total/5;
	cout<<"Total="<<r.total<<"\n";
	cout<<"Total percentget="<<r.per;

	if(r.s1<=33 || r.s2<=33 || r.s3<=33 || r.s4<=33 || r.s5<=33)
	{
		cout<<"\n"<<"You are fail";
	}
	else
	{
		cout<<"\n"<<"You are pass";
	}
	getch();
}
