#include<stdio.h>
void main()
{
    int a[50][50],row,item,colum,i,j,temp,rchange,cchange;
    printf("Enter the row number=");
    scanf("%d",&row);
    printf("\nEnter the colum number=");
    scanf("%d",&colum);



    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colum;j++)
        {
        printf("Enter the array a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("Eter the row number you want to change=");
    scanf("%d",&rchange);
    printf("Eter the colume number you want to change=");
    scanf("%d",&cchange);
    printf("Enter the new value=");
    scanf("%d",&item);
    if(i==rchange && j==rchange)
    {
        a[i][j]=a[i-1][j-1];
    }
    a[i-1][j-1]=item;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colum;j++)
        {
        printf("%.2d ",a[i-1][j-1]);

        }
        printf("\n");
    }
 printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24TCEVT0");
}
