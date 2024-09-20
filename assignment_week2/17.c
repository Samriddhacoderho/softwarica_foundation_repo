#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter age of person 1,2, and 3:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("Person 1 is the oldest");
    }
    else if(b>a && b>c)
    {
        printf("Person 2 is the oldest");
    }
    else
    {
        printf("Person 3 is the oldest");
    }
    return 0;
}