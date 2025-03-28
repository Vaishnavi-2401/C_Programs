#include<stdio.h>

void checknum(int num)
{
    if(num < 0)
    {
        printf("Number is Negative!\n");
    }
    else if(num == 0)
    {
        printf("Number is Zero!\n");
    }
    else
    {
        printf("Number is Positive!\n");
    }
}

int main()
{
    int num = 10;
    checknum(num);
    return 0;
}