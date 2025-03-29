#include<stdio.h>

int main()
{
    int x = 15, y = 25, min;

    min = (x < y) ? x : y;

    while(1)
    {
        if(x % min == 0 && y % min == 0)
        {
            printf("GCD of %d & %d = %d\n", x, y, min);
            break;
        }

        --min;
        
    }

    return 0;

}