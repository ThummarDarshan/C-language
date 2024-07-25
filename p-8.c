// foodies restaurant
#include<stdio.h>
void  main()
{
    int choice,total=0;
    printf("Welcome  foodies \n");
    printf("1. burger=150/-");
    printf("\n2. pizza=200/-");
    printf("\n3. pasta= 120/-");
    printf("\n4. sandwich=100/-");
    printf("\n5. french fries=80/-");
    printf("\n0. finish your oder");

    while(choice)
    {
    printf("\nEnter the choice=");
    scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                total+=150;
                break;
            case 2:
                total+=200;
                break;
            case 3:
                total +=120;
                break;
            case 4:
                total+=100;
                break;
            case 5:
                total+=80;
                break;
            case 0:
                printf("\n your total bill=%d",total);
                break;
            defult :
                printf("\n please enter valide choice");

        }


    }
     printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24TCEVT0");
    return 0;
}
