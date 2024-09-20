#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

float add(float a, float b)
{
    float c;
    c = a + b;
    return c;
}

float subtract(float a, float b)
{
    float c;
    c = a - b;
    return c;
}

float multiply(float a, float b)
{
    float c;
    c = a * b;
    return c;
}

float divide(float a, float b)
{
    float c;
    c = a / b;
    return c;
}

int main()
{
    int choice;
    int i=1;
    char ask;
    while (i==1)
    {
        printf("Choose any one:\n1)Add\n2) Subtract\n3)Multiply\n4)Divide::");
        scanf("%d", &choice);

        if (choice > 4 || choice < 1)
        {
            printf("Error");
            exit(0);
        }
        else
        {
            float a, b, c;
            printf("Enter two numbers:");
            scanf("%f %f", &a, &b);
            // scanf("%f",&b);

            switch (choice)
            {
            case 1:
                c = add(a, b);
                printf("%f", c);
                break;
            case 2:
                c = subtract(a, b);
                printf("%f", c);
                break;
            case 3:
                c = multiply(a, b);
                printf("%f", c);
                break;
            case 4:
                c = divide(a, b);
                printf("%f", c);
                break;
            default:
                printf("Syntax Error");
            }
            printf("\nDo you want to try again?(Y/N)");
            scanf(" %c",&ask);
            ask=tolower(ask);

            if(ask=='n')
            {
                i=2;
                printf("\nThankYou!\n");
            }
            else if(ask!='y')
            {
                printf("\nSyntax error\n");
                exit(0);
            }
        }
    }
    return 0;
}
