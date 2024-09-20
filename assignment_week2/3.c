#include <stdio.h>

int main()
{
    float p,t,r,si;
    printf("Enter p,t,r:");
    scanf("%f %f %f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("%f",si);
    return 0;
    
}