#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,t,ci;
    printf("Enter p,t,r:");
    scanf("%f %f %f",&p,&t,&r);
    ci=p*pow((1+r/100),t)-p;
    printf("%f",ci);
    return 0;
}