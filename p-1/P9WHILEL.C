// count fectoril


#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=1,sum=1;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
       /*/	  while(a>=i)
	  {

		printf("ans=%d\n",a);
		sum=sum*a;
		a--;
	  }    */

	  do
	  {
		printf("ans=%d\n",a);
		sum=sum*a;
		a--;
	  }while(a>=i);
	 printf("ans=%d",sum);
	getch();
}