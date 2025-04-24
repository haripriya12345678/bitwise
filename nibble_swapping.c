#include<stdio.h>
int main()
{
    unsigned int x=0x123456;
    unsigned int a=0xF0F0F0;
    unsigned int b=0x0F0F0F;
    unsigned int nibble1_and,nibble2_and,input,var,nibble_or;
    nibble1_and=x&a;
    nibble2_and=x&b;
    input=(nibble1_and>>4);
    var=(nibble2_and<<4);
    nibble_or=input|var;
    printf("%x",nibble_or);
}