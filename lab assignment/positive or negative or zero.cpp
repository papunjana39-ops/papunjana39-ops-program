#include <stdio.h>

void check(int n)
{
    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    check(n);

    return 0;
}