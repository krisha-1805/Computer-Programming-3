//find out whether a given no. is perfect or not

#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is Not a Perfect Number.\n", num);
    return 0;
}

