#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigits(n));

    return 0;
}