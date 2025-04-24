#include<stdio.h>
int main()
{
    unsigned int input = 0xFA;
    unsigned int mask  = 0x3;
    unsigned res=input |mask;
    printf("%x",res);
    return 0;
}