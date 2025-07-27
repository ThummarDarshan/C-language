/* PROJECT-2 RESULT*/

#include<stdio.h>
#include<conio.h>
void main()
{
	float R,S1,S2,S3,S4,S5,S6,total,per;
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



	getch();
}