#include<stdio.h>
void main()
{
    int userpick,compick,totalpick=21;
    printf("plese pick strick 1 to 5 strick from 21");
    /*printf("pick up your sticks from 21 strick=");
    scanf("%d",&userpick);*/

    while(totalpick>=1)
    {

        printf("\npick up your sticks from %d strick=",totalpick);
        scanf("%d",&userpick);
        if(userpick<0 || userpick>5 )
        {
            printf("invalide pick");
            continue;
        }
        compick=5-userpick;
        printf("\ncomputer pick =%d",compick);
        totalpick=totalpick-5;
        //  continue;
    }
    if(totalpick=1)
    {
        printf("\nyou are lose");

    }
 printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24TCEVT0");

}
