#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
    printf("The old value of a is:%d",a);
    printf("The old value of b is %d",b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("The new value of a is:%d",a);
    printf("The new value of b is %d",b);
}