#include <stdio.h>

int func_this(int);

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int c=func_this(a);
    printf("%d",c);
}

int func_this(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {

        return a * func_this(a - 1);
    }
}