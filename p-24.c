#include<stdio.h>
#include<string.h>


void display(char a[], char b[],float);
struct student{
    char title[20];
    char name[20];
    float amount;


}s1;

void main()
{

    strcpy(s1.title,"The Secret");
    strcpy(s1.name,"Rhonda Byrne");
    s1.amount=850;
    display(s1.title,s1.name,s1.amount);

}
void display(char a[],char b[],float c)
    {

        printf("The title of the book is : %s.\n",a);
        printf("The book Author name is : %s.\n",b);
        printf("The amount of the book is : %.2f\n ",c);
        printf("------------------------------------------------------\nMy name is Thummar Darshna.\nMy ID is : 24CE127.");
}
