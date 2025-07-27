// GHADIYA DO WHILE LOOP


#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=1,sum;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	do
	{
		sum=a*i;
		printf("%d*%d=%d\n",a,i,sum);


		i++;
	}while(i<=10);

	getch();
}
