/*
Write a C program using a character string in a block of memory space created by
calloc () and then modify the same to store a larger string using realloc () function.
(Dynamic Array).*/

// this program is prepared by 24ce127_darshan thummar


#include<stdio.h>

void main()
{
    char *a;
    int i,n;

    printf("enter the size of string you want to create : ");
    scanf("%d",&n);

    a=(char*)calloc(n,sizeof(char));

   printf("\nenter your string : ");
   scanf("%s",a);
   puts(a);


   //modifying string size


printf("\nenter new size of the string : ");
scanf("%d",&n);

 a=(char*)realloc(a,n*sizeof(char));

   printf("\nenter your new string : ");
   scanf("%s",a);
   puts(a);

   free(a);


   printf("\n\n24ce127___darshan thummar");

}

