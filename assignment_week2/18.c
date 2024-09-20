#include <stdio.h>

int main()
{
    float units;
    printf("Enter units:");
    scanf("%f",&units);

    if(units<=100)
    {
        printf('Rate is 5 per unit');
    }
    else if( units>=100 && units <= 200)
    {
        printf(" rate is 10 per unit");
    }
    else
    {
        printf("rate is 15 per unit");
    }

    return 0;
}