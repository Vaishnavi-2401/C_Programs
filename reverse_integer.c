#include<stdio.h>

int main()
{
    int num, rev = 0;

    printf("Enter an Integer : \n");
    scanf("%d", &num);

    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    printf("Reversed Integer : %d \n", rev);

    return 0;

}