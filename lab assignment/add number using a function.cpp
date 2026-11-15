#include <stdio.h>

int readNumber()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int num;

    num = readNumber();

    printf("Number = %d", num);

    return 0;
}