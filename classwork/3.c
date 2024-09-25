#include <stdio.h>

void fib(int,int,int);

int main()
{
    int a=0;
    int b=1;
    int count;
    printf("Enter count:");
    scanf("%d",&count);  
    if(count<0)
    {
        return 0;
    }
    else
    {
    printf("%d %d",a,b);   
    fib(a,b,(count-2));   
    }
}

void fib(int a,int b,int count)  
{
    if(count==0)
    {
        return;
    }
    int c=a+b;   
    printf(" %d ",c);   
    a=b;   
    b=c;   
    count=count-1;   
    fib(a,b,count);    
}