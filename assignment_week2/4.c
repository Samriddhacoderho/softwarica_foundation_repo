#include <stdio.h>

int main()
{
    const float pi=3.14159;
    float r,h,a,v;
    printf("Enter radius and height:");
    scanf("%f %f",&r,&h);
    a=pi*r*r;
    v=pi*r*r*h;
    printf("Area: %f\nVolume: %f",a,v);
    return 0;
}