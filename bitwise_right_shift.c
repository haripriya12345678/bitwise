#include<stdio.h>
void display(int x)
{
    int i;
    for(i=sizeof(int) * 8-1;i>=0;i--)
    {
        (x&(1<<i)) ? printf ("1") : printf("0");
        if(i%4==0)
        printf(" ");
    }
    printf("\n");
}
int main(void)
{
    int a=7;
    printf("a=%d\t",a);
    display(a);
    a=a<<2;
    printf("a=%d\t",a);
    display(a);
    a=a<<3;
    printf("a=%d\t",a);
    display(a);
     return 0;
}