#include<stdio.h>
int main()
{
    unsigned int input=0x75;
    unsigned int mask=0x03;
    unsigned int res;
    res=input & mask;
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