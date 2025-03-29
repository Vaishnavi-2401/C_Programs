#include<stdio.h>

int main()
{
    int num, original_num, rev = 0;

    printf("Enter the Number : \n");
    scanf("%d", &num);

    original_num = num;

    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    if(original_num == rev)
    {
        printf("It is a Palindrome Number!\n");
    }
    else
    {
        printf("It is not a Palindrome Number!\n");
    }

    return 0;

}