#include <stdio.h>

int main()
{
    float a,b,c,d,e,t,av,p;
    printf("Enter marks of 5 subjects respectively:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    av=t/5;
    p=(t/500)*100;
    printf("Total Marks: %f\nAverage Marks: %f\nPercentage: %f",t,av,p);
    return 0;
}