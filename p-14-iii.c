
#include<stdio.h>
void main()
{
    char a,i;
    int j;
    for(i=1;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(j=1,a=1;j<=i;j++)
        {

            printf("%c",64+a);
            a++;
        }
        a--;

         for(j=1+1;j<=i;j++)
        {
            a--;
            printf("%c",64+a);
            a++;
            a--;

        }

        printf("\n");
    }
    printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24CE127");

}

