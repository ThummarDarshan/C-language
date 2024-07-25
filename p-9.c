#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks=");
    scanf("%d",&marks);
    (marks>=90) ? printf("Grade is A") : (marks>=80&&marks<90) ?  printf("Grade is B") : (marks>=70&&marks<80) ? printf("Grade is C") :
        (marks>=60&&marks<70) ? printf("Grade is D") : (marks<60) ? printf("Grade is E"): printf(" Invalid Input");


}
