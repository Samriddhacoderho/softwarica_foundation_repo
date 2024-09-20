#include <stdio.h>

int main()
{
    int vote_age=18;
    int user_age;
    printf("Enter user age:");
    scanf("%d",&user_age);
    
    if(user_age>=18)
    {
        printf("You are eligible to vote for this election!");
    }
    else
    {
        printf("You are not eligible to vote for this election!");
    }

    return 0;
}