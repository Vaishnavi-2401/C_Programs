#include<stdio.h>

int main()
{
    int x = 15, y = 25, max;

    max = (x > y) ? x : y;

    while(1)
    {
        if(max % x == 0 && max % y == 0)
        {
            printf("LCM of %d & %d = %d\n", x, y, max);
            break;
        }

        ++max;
        
    }

    return 0;

}