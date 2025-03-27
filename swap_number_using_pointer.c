#include<stdio.h>

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int a, b;

    printf("Enter the two Numbers : \n");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("After Swapping : a = %d, b = %d\n", a, b);

    return 0;
}