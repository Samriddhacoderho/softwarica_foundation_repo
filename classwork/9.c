#include <stdio.h>

void checkprime(int);

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    checkprime(number);
}

void checkprime(int number)
{
    int c = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Composite Number");
    }
}