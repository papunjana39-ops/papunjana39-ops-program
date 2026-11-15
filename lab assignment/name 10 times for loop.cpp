#include <stdio.h>

int main()
{
    char name[50];
    int i;

    printf("Enter your name: ");
    scanf(" %49[^\n]", name);

    for (i = 1; i <= 10; i++)
    {
        printf("%s\n", name);
    }

    return 0;
}