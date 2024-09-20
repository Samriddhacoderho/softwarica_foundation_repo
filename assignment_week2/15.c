#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<=21)
    {
        printf("You are not eligible to rent a car");
    }
    else
    {
        char check;
        printf("Do you have a valid driving license? (Y/N)");
        scanf(" %c",&check);
        if(check=='N')
        {
            printf("You are not eligible to rent a car");
        }
        else if(check=='Y')
        {
            printf("You are eligible to rent a car");
        }
        else
        {
            printf("Syntax Error");
        }
    }
    return 0;
}