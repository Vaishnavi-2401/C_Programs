#include<stdio.h>

int main()
{
    int year;

    printf("Enter the Year : \n");
    scanf("%d", &year);

    if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        printf("It is a Leap Year!\n");
    }
    else
    {
        printf("It is not a Leap Year!\n");
    }
    
    return 0;
}