#include<stdio.h>
#include<string.h>
int main()
{
    unsigned int input=0x78;
    unsigned int mask=0x04;
    int res,i;
    res=input|(0>>3);
    for(i=0;i<8;i++)
    {
        if(res & (80>>i))
        {
            printf("it is set");
        }
        else
        {
            printf("it is not a set");
        }
    }
    return 0;
}