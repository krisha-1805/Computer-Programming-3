//Print factorial of a given no.

#include<stdio.h>
int main()
{
    int i, n, factorial=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is %d", n, factorial);
}
