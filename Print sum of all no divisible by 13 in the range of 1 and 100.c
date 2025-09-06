//Print sum of all no.s divisible by 13 in the range of 1 and 100

#include<stdio.h>
int main()
{
    int i, sum=0;
    for(i=1; i<=100; i++)
    {
        if(i%13==0)
        {
            sum=sum+i;
        }
    }
    printf("%d", sum);
}
