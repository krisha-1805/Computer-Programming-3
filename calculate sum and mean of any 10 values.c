//Calculate sum and mean of any 10 values

#include<stdio.h>
int main()
{
    int i;
    float num, sum=0, mean;
    for(i=1; i<=10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum=sum+num;
    }
    mean = sum / 10;
    printf("sum= %f\n", sum);
    printf("mean= %f", mean);
    return 0;
}
