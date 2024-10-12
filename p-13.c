#include<stdio.h>
void main()
{
    int i,j,row,colume,a;
  printf("Enter the number of rows=");
    scanf("%d",&row);
     printf("Enter the number of colume=");
    scanf("%d",&colume);
    for(i=1; i<=row; i++)
    {
        for(j=1,a=1 ; j<=colume; j++)
        {
            printf("%.2d ",i*j);

        }
        printf("\n");

    }
    printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24CE127");

}
