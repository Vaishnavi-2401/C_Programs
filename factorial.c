#include <stdio.h>

int factorial(int num) 
{
    int fact = 1, i;

    for (i = 1; i <= num; i++) 
    {
        fact = fact * i;
    }

    return fact;
}

int main() 
{
    int num = 5;

    int fact = factorial(num);

    printf("Factorial of %d : %d \n", num, fact);
    
    return 0;
}