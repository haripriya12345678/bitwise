#include<stdio.h>
int main()
{
    unsigned int x;
    unsigned int res;
    printf("Enter the number:");
    scanf("%x",&x);
    if(x^(0x01))
    {
        printf("given number is even");
    }
    else
    {
        printf("given number is odd");
    }
    return 0;
}