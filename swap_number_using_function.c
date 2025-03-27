#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
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