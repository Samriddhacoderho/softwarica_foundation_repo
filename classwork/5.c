#include <stdio.h>
#include <math.h>

void func_this(int,int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int num_test1 = num;
    int power=0;
    if (num < 0)
    {
        printf("Enter a number higher than 0");
        return 0;
    }
    else
    {

        while (num_test1 != 0)
        {
            int r = num_test1 % 10;
            power=power+1;
            num_test1 = num_test1 / 10;
        }
    }
    func_this(num, power);
}

void func_this(int num, int power)
{
    int num_test2 = num;
    float s;
    while (num_test2 != 0)
    {
        int r = num_test2 % 10;
        s = s + pow(r, power);
        num_test2 = num_test2 / 10;
    }
    if (s == num)
    {
        printf("Armstrong!");
    }
    else
    {
        printf("Not Armstrong");
    }
}