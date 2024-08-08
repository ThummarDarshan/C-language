#include<stdio.h>
void main()
{
    int a[50],n,i,j,temp;
    printf("Enter the index number=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the array=");
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {

        if(a[i]>a[j])
        {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


        }
        }

    }
    for(i=0;i<n;i++)
    {
         printf("\nthe assiding order=");
        printf("%d",a[i]);
    }

}
