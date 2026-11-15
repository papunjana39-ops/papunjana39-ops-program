#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter student name: ");
    scanf(" %49[^\n]", name);

    printf("Student Name: %s", name);

    return 0;
}