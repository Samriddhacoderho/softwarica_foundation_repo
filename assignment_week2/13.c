#include <stdio.h>

int main()
{
    int income;
    printf("Enter your income:");
    scanf("%d",&income);
    if(income<=10000)
    {
        printf("No tax");
    }
    else if(income>=10001 && income<=50000)
    {
        printf("10% tax");
    }
    else if(income>=50001 && income<=100000)
    {
        printf("20% tax");
    }
    else
    {
        printf("30% tax");
    }

    return 0;
}