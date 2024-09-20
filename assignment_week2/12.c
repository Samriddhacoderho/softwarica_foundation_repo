#include <stdio.h>

int main()
{
    float weight,height,bmi;
    printf("Enter your height and weight:");
    scanf("%f %f",&height,&weight);
    bmi=weight/(height*height);
    if(bmi<18.5)
    {
        printf("You are underwight");
    }
    else if(bmi>=18.5 && bmi<24.9)
    {
        printf("Normal weight");
    }
    else if(bmi>=25 && bmi<29.9)
    {
        printf("Overweight");
    }
    else
    {
        printf("Obese");
    }
    return 0;
}