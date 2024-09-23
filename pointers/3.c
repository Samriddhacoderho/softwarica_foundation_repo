#include <stdio.h>

float sale(float *a);

int main()
{
    float salary;
    printf("Enter salary:");
    float *ptr=&salary;
    scanf("%f",ptr);
    printf("Your original salary is:%f",*ptr);
    float c=sale(&salary);
    printf("\nYour new salary is:%f",c);
    return 0;
}



float sale(float *a)
{
    return (*a*2);
}