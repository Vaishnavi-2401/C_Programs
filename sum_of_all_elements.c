#include<stdio.h>

int main() 
{
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;

    for(int i = 0; i < n; i++) 
    {
        sum = sum + numbers[i];
    }

    printf("Sum of All Elements = %d\n", sum);

    return 0;
}