#include<stdio.h>
int main()
{
    unsigned int input =0xAA;
    unsigned int mask = 0x10;
    unsigned res;
    res = input | mask;
    if(res==1)
    {
        printf("bit is a set");
    }
    else
    {
        printf("bit is not a set");
    }
    return 0;
}