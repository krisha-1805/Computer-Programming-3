//Count +ve,-ve and zeros in 200 values

#include<stdio.h>
int main()
{
    int i, n, positive=0, negative=0, zeros=0;
    for(i=1; i<=200; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        if(n>0)
        {
            positive=positive + 1;
        }
        if(n<0)
        {
            negative=negative + 1;
        }
        if(n==0)
        {
            zeros=zeros + 1;
        }
    }
    printf("number of positive nos.: %d\n", positive);
    printf("number of negative nos.: %d\n", negative);
    printf("number of zeros: %d", zeros);
}
