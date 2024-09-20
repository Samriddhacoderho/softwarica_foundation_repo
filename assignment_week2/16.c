#include <stdio.h>

int main()
{
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number>=0)
    {
        printf("Positive");
    }
    else if(number<=0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero number");
    }
}
