#include<stdio.h>
#include<string.h>
int main()
{
    unsigned int x=0x75;
    unsigned int mask=0x08;
    unsigned int res=x|mask;
    printf("%x",res);
    return 0;
}