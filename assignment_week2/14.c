#include <stdio.h>

int main()
{
    int user_items;
    printf("Enter number of items you have bought:");
    scanf("%d",&user_items);
    if(user_items>=1 && user_items<=10)
    {
        printf("5% discount");
    }
    else if(user_items>=11 && user_items<=50)
    {
        printf("10% discount");
    }
    else
    {
        printf("15% discount");
    }
    return 0;
}