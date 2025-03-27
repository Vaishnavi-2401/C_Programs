#include<stdio.h>

int prime(int num)
{
    if(num <= 1)
    {
        return 0;
    }
    for(int i = 2; i*i <= num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    int num;

    printf("Enter the Number :\n");
    scanf("%d", &num);

    if(prime(num))
    {
        printf("Number is a Prime Number!\n");
    }
    else
    {
        printf("Number is Not a Prime Number!\n");
    }
    return 0;
}