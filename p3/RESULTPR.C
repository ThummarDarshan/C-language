
	/* PROJECT-2 RESULT*/

#include<stdio.h>
#include<conio.h>
void main()
{
	float R,S1,S2,S3,S4,S5,S6,total,per,cn=0;
	clrscr();
	printf("\n\t Enter Your Roll No.=");
	scanf("%f",&R);
	printf("\n\t Enter Your Maths Marks=");
	scanf("%f",&S1);
	printf("\n\t Enter Your Computer Marks=");
	scanf("%f",&S2);
	printf("\n\t Enter Your Chemisty Marks=");
	scanf("%f",&S3);
	printf("\n\t Enter Your Physice Marks=");
	scanf("%f",&S4);
	printf("\n\t Enter Your English Marks=");
	scanf("%f",&S5);
	printf("\n\t Enter Your Hindi Marks=");
	scanf("%f",&S6);
	total=S1+S2+S3+S4+S5+S6;
	printf("\n\t Total Marks=%f",total);
	per=total*100/600;

	printf("\n\t Total Per=%f",per);

		/* MIN MARKS CASE  */

	if(S1<S2 && S1<S3 && S1<S4 && S1<S5 && S1<S6)
	{
		printf("\n\tYour Maths`s Marks is min");
	}
	else if(S2<S3 && S2<S4 && S2<S5 && S2<S6)
	{
		printf("\n\tYour Computer`s Marks is min");
	}
	else if(S3<S4 && S3<S5 && S3<S6)
	{
		printf("\n\tYour Chemisty`s Marks is min");
	}
	else if(S4<S5 && S4<S6)
	{
		printf("\n\tYour Physice`s Marks is min ");
	}
	else if(S5<S6)
	{
		printf("\n\tYour English`s Marks is min");
	}
	else
	{
		printf("\n\tYour Hindi`s Marks is min");
	}


		/* MAX MARKS CASE  */


	if(S1>S2 && S1>S3 && S1>S4 && S1>S5 && S1>S6)
	{
		printf("\n\tYour Maths`s Marks is max");
	}
	else if(S2>S3 && S2>S4 && S2>S5 && S2>S6)
	{
		printf("\n\tYour Computer`s Marks is max");
	}
	else if(S3>S4 && S3>S5 && S3>S6)
	{
		printf("\n\tYour Chemisty`s Marks is max");
	}
	else if(S4>S5 && S4>S6)
	{
		printf("\n\tYour Physice`s Marks is max ");
	}
	else if(S5>S6)
	{
		printf("\n\tYour English`s Marks is max");
	}
	else
	{
		printf("\n\tYour Hindi`s Marks is max");
	}


	/* GARDE */

	if(per>90 && per<=100)
	{
		printf("\n\t Your Grade is A1");
	}
	else if(per>80 && per<=90)
	{
		printf("\n\t Your Grade is A2");
	}
	else if(per>70 && per<=80)
	{
		printf("\n\t Your Grade is B1");
	}
	else if(per>60 && per<=70)
	{
		printf("\n\t Your Grades is B2");
	}
	else if(per>50 && per<=60)
	{
		printf("\n\t Your Grade is C1");
	}
	else if(per>40 && per<=50)
	{
		printf("\n\t Your Grade is C2");
	}
	else if(per>30 && per<=40)
	{
		printf("\n\t Your Grade is D1");
	}
	else if(per>20 && per<=30)
	{
		printf("\n\t Your Grade is D2");
	}
	else
	{
		printf("\n\t Your Grade is E");
	}

	/* PASS,FAIL,ATKT */

	if(S1<=33)
	{
		cn++;
	}
	if(S2<=33)
	{
		cn++;
	}
	if(S3<=33)
	{
		cn++;
	}
	if(S4<=33)
	{
		cn++;
	}
	if(S5<=33)
	{
		cn++;
	}
	if(S6<=33)
	{
		cn++;
	}
	if(cn<=2 )
	{
		printf("\n\t You Get ATKT");
	}
	else if(cn>=2)
	{
		printf("\n\t You Are Fail ");
	}
	else
	{
		printf("\n\t You Are Pass");
	}




	getch();
}