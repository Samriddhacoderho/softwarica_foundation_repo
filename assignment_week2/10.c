#include <stdio.h>

int main()
{
    char this;
    printf("Enter a letter:");
    scanf("%c",&this);
    if(this=='a' || this=='e' || this=='i' || this=='o' || this=='u')
    {
        printf("The character is a vowel!");
    }
    else
    {
        printf("This character is not a vowel!");
    }

    return 0;
}