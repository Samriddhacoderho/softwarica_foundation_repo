#include <stdio.h>
#include <string.h>

int main()
{
    char name[20]="Samriddha";
    char sirname[20]="Satyal";
    if(!(strcmp(name,sirname)==0))
    {
        printf("not same");
    }
    else
    {
        printf(" same");
    }

    return 0;
}