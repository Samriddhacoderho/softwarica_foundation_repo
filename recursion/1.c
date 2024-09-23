//Recursion function is a function calling itself

#include <stdio.h>

void func_this(int);

int main()
{
    int number=3;
    func_this(number);
}

void func_this(int a)
{
    if(a==0)
    {
        return;
    }
    else
    {
        printf("%d\n",a);
        func_this(a-1);
    }
}