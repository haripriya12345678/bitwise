#include<stdio.h>
int main()
{
    unsigned int input=0xFB;
    unsigned int mask =0x4;
    unsigned int res;
    res=input|mask;
    printf("%x",res);
    for(int i=0;i<8;i++)
    {
        printf("%x",(res & (1<<i)));
    }
    return 0;
}