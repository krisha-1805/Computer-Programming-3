//Find out how many boys and girls are there in a class of 50 students

#include<stdio.h>
int main()
{
    int i, boys=0, girls=0;
    char gender;
    printf("Enter the sex code for 50 students, B for boys and G for girls\n");
    for(i=1; i<=50; i++)
    {
        printf("student no. %d:", i);
        scanf(" %c", &gender);
        if(gender =='B')
        {
            boys++;
        }
        if(gender =='G')
        {
            girls++;
        }
    }
    printf("number of boys: %d\n", boys);
    printf("number of girls: %d", girls);
    return 0;
}
