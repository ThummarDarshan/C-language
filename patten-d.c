
#include<stdio.h>
void main()
{

    int j,a,i,n;
    printf("Enter the row number=");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        for(j=n; j>i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {

            printf("*");

        }
        printf("\n");
    }


        for(i=1; i<n; i++)
        {
            for(j=1; j<=i; j++)
            {
                printf(" ");
            }
            for(j=1; j<=2*(n-i)-1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24TCEVT0");

}

