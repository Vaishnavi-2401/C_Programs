#include<stdio.h>

int main() 
{
    int arr[100], n, temp;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n / 2; i++) 
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed Array : ");

    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;

}