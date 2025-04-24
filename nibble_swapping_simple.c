#include<stdio.h>
int main()
{
    unsigned int x=0xABCDEF;
    unsigned int output;
    output=((x&0xF0F0F0)>>4)|(((x&0x0F0F0F)<<4));
    printf("%x",output);
    return 0;
}