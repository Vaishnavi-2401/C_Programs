#include<stdio.h>

int main()
{
    int a = 9, b = 10, c = 22;

    if(a >= b)
    {
        if(a >= c)
        {
            printf("%d is largest!\n", a);
        }
        else
        {
            printf("%d is largest!\n", c);
        }
    }

    else
    {
        if(b >= c)
        {
            printf("%d is largest!\n", b);
        }
        else
        {
            printf("%d is largest!\n", c);
        }
    }
    return 0;
}