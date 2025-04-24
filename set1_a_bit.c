#include<stdio.h>
int main()
{
    unsigned int x=0x56;
    unsigned int i;
    for(i=0;i<8;i++)
    {
        if(x|(1<<i))
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