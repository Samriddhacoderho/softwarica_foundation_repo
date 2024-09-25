#include <stdio.h>

void pal(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    pal(num);
}

void pal(int num)
{
    int donum=num;
    int s=0;
    while(donum!=0)
    {
        int r=donum % 10;
        s=(s*10)+r;
        donum=donum/10;
    }
    if(s==num)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}