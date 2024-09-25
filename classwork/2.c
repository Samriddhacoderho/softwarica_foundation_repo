#include <stdio.h>

void swap(int *aptr,int *bptr);

void swap(int *aptr,int *bptr)
{
    int c;
    int *cptr=&c;
    *cptr=*aptr;
    *aptr=*bptr;
    *bptr=*cptr;
    printf("The new value of a is:%d",*aptr);
    printf("Thw new value of b is:%d",*bptr);
}

int main()
{
    int a=10;
    int *aptr=&a;
    int b=20;
    int *bptr=&b;
    printf("The old value of a is %d and old value of b is %d",*aptr,*bptr);
    swap(aptr,bptr);
}