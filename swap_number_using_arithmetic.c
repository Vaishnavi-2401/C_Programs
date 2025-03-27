#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter the two Numbers : \n");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping : a = %d, b = %d\n", a, b);

    return 0;
}