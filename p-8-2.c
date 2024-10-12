#include<stdio.h>
void  main()
{
    int choice,total=0,y;
    printf("Welcome  foodies \n");
    printf("1. burger=150/-");
    printf("\n2. pizza=200/-");
    printf("\n3. pasta= 120/-");
    printf("\n4. sandwich=100/-");
    printf("\n5. french fries=80/-");
    printf("\n0. finish your oder");

    y:printf("\nEnter the choice=");
    scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                total+=150;
                goto y;
                break;
            case 2:
                total+=200;
                goto y;
                break;
            case 3:
                total +=120;
                goto y;
                break;
            case 4:
                total+=100;
                goto y;
                break;
            case 5:
                total+=80;
                goto y;
                break;
            case 0:
                printf("\n your total bill=%d",total);
                printf("\nThank you");
                break;
            defult :
                printf("\n please enter valide choice");
        }

     printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24CE127");
    return 0;
}
