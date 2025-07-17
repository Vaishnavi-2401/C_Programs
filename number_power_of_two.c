#include<stdio.h>

int main() 
{
    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    if(num <= 0) 
    {
        printf("Number should be Positive!\n");

        return 0;
    }

    while(num % 2 == 0) 
    {
        num = num / 2;
    }

    if(num == 1)
    {
        printf("It is a Power of 2\n");
    }
    else
    {
        printf("It is NOT a Power of 2\n");
    }

    return 0;

}