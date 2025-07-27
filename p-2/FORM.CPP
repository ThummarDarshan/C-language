// aplication form in struct in cpp

#include<iostream.h>
#include<conio.h>
struct form
{
	char name[120],state[23],course[23],village[34];
       int rollno,std;
       long int moblienumber;
};

void main()
{
	int i=0;
	clrscr();
	struct form f;
	cout<<"Enter the full name=";
	cin>>f.name;
	cout<<"\n"<<"Enter the last std=";
	cin>>f.std;
	cout<<"\n"<<"Enter thr roll no.=";
	cin>>f.rollno;
	cout<<"\n"<<"Enter the your phnoe number=";
	cin>>f.moblienumber>>"%ld";
	cout<< "\n"<<"Enter the state=";
	cin>>f.state;
	cout<<"\n"<<"Enter the which course is slected=";
	cin>>f.course;
	cout<<"\n"<<"Enter the your village name=";
	cin>>f.village;

	cout<<"Your full namr="<<f.name;
	cout<<"\n"<<"Your last std is="<<f.std;
	cout<<"\n"<<"Your roll no.="<<f.rollno;
	cout<<"\n"<<"Your phonr number="<<f.moblienumber;
	cout<<"\n"<<"Your state is="<<f.state;
	cout<<"\n"<<"Your course which you slect="<<f.course;
	cout<<"\n"<<"Your village is="<<f.village;



	getch();
}