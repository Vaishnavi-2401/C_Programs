#include<stdio.h>

void checknum(int num)
{
    int r = num % 2;

    if(r == 0)
    {
        printf("Number is Even!\n");
    }
    else
    {
        printf("Number is Odd!\n");
    }
}

int main()
{
    int num = 101;
    checknum(num);
    return 0;
}