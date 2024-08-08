#include<stdio.h>
void main()

{
    int a[50],i,poss=0,nege=0,odd=0,even=0;

    for(i=0;i<25;i++)
    {
        printf("Enter the array=");
        scanf("%d",&a[i]);

    }
    for(i=0;i<25;i++)
    {
        if(a[i]>0)
        {
            poss++;
        }
        else
        {
            nege++;
        }
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\npossitve number=%d",poss);
     printf("\nnegetive number=%d",nege);
      printf("\neven number=%d",even);
       printf("\nodd number=%d",odd);
    printf("\nName=Darshan Thummar");
prntf("\nId=24TCEVT0");

}
