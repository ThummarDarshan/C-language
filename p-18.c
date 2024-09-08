#include <stdio.h>
#include <string.h>

#define SIZE 5
#define NAME_LENGTH 50


int main()
{
    char names[SIZE][NAME_LENGTH];

    // Input names of 5 students
    printf("Enter the lower or upper case latter names of 5 students:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Name %d: ", i + 1);
        fgets(names[i], NAME_LENGTH, stdin);

    }




   char temp[NAME_LENGTH];

    // Bubble sort algorithm to sort names alphabetically
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    // Print the sorted names
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\n", names[i]);
    }
printf("Name=Thummar Darshan");
printf("Student`s I'D=24TCEVT0");


    return 0;
}
