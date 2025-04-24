#include<stdio.h>
#include<string.h>
int main()
{
    unsigned int input = 0x67;
    unsigned int mask=0x03;
    unsigned int res ,i;
    res=input|mask;
    printf("%x",res);
    for(i>0;i<8;i++)
    {
        printf("%s",res&(0>>i));

    }
    return 0;
}