#include<stdio.h>
int main()
{
    char operation;
    float add,sub,mul,div,n1,n2;
    printf("enter the 1st number:");
    scanf("%f",&n1);

    printf("enter the 2nd number:");
    scanf("%f",&n2);

    printf("enter an arithmetic operation \n");
    scanf("\n%c",&operation);


    switch(operation)
    {
        case '+':
           //add=n1+n2;
           printf("Addition=%f",n1+n2);
           break;
        case '-':
           sub=n1-n2;
           printf("Substraction=%f",sub);
           break;
         case '/':
           div=n1/n2;
           printf("Division=%f",div);
           break;
         case '*':
           mul=n1*n2;
           printf("multipliction=%f",mul);
           break;
         default:
            printf("choose option from above");
            break;
    }
     printf("\nNAME = Thummar Darshan ");
    printf("\n ID=24CE127");
return 0;
}
