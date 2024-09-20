#include <stdio.h>

int main()
{
    const float pi=3.14159;
    float r,h,v;
    printf("Enter radius and height:");
    scanf("%f %f",&r,&h);
    v=pi*r*r*h;
    printf("Volume: %f",v);
    return 0;
}
