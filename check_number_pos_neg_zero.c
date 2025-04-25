#include<stdio.h>

void check_num(int num)
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
 
    check_num(num);
    
    return 0;
}
