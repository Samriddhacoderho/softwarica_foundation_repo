#include <stdio.h>

int add(int a,int b);

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int c=add(2,3);
    printf("%d",c);
}