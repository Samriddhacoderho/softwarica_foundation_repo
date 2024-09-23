#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = sum(&a, &b);
    printf("%d", c);
}

int sum(int *a,int *b);

int sum(int *a,int *b)
{
    return *a+*b;
}