#include<stdio.h>

int main()
{
    int num, original_num, rem, res = 0;

    printf("Enter the Number : \n");
    scanf("%d", &num);

    original_num = num;

    while(original_num != 0)
    {
        rem = original_num % 10;
        res = res + (rem * rem * rem);
        original_num = original_num / 10;
    }

    if(res == num)
    {
        printf("It is a Armstrong Number!\n", num);
    }
    else
    {
        printf("It is not a Armstrong Number!\n", num);
    }
    
    return 0;

}