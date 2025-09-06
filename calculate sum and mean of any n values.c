//Calculate sum and mean of any n values

#include<stdio.h>
int main()
{
    int i, n;
    float num, sum=0, mean;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum=sum+num;
    }
    mean = sum / n;
    printf("sum= %f\n", sum);
    printf("mean= %f", mean);
    return 0;
}
