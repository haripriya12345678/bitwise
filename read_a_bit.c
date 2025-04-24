#include<stdio.h>
int main()
{
    unsigned int x=0x86;
    unsigned int res,i;
    res=x&(1<<3);
    for(i=0;i<8;i++)
    {
        if(res&(1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}