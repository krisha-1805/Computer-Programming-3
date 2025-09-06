//Separate the digits of a given number

#include <stdio.h>
int main()
{
    int num, digit, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("Digits of %d are: ", num);
    while (rev > 0)
    {
        digit = rev % 10;
        printf("%d ", digit);
        rev /= 10;
    }

    return 0;
}

