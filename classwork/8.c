//8. WAP to swap three variables without using a temporary variable:

int func_this(int,int,int);

#include <stdio.h>

int main()

{
    int a=10;
    int b=20;
    int c=30;
    printf("Old value of a:%d\n",a);
    printf("Old value of b:%d\n",b);
    printf("Old value of c:%d\n",c);

    c=func_this(a,b,c);
    c=a;
    printf("New value c:%d\n",c);
    return 0;
}

int func_this(int a,int b,int c)
{
    a=b;
    b=c;
    printf("New value of a:%d\n",a);
    printf("New value of b:%d\n",b);
    return c;
}