/*Imagine a situation where two values need to be swapped within a banking system,
such as updating balances between two accounts after a transaction. Make use of
pointer as function arguments for swapping function.*/

#include<stdio.h>
void ptr(int *,int *);
void main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter the first amount =");
    scanf("%d",&a);
    printf("\nEnter the second amount=");
    scanf("%d",&b);

    int temp=*p;
    *p=*q;
    *q=temp;
    printf(" \n1st amount =%d",a);
    printf(" \n2nd amount =%d",b);

    printf("\n 24CE127__Thummar Darshan");

}
