#include <stdio.h>

int main()
{
    int n, sum, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 9)
    {
        sum = 0;

        while (n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        n = sum;
    }

    if (n == 1)
        printf("Magic Number");
    else
        printf("Not a Magic Number");

    return 0;
}