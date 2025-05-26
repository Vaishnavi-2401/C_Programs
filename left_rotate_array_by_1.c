#include<stdio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int first;

    first = arr[0];

    for(int i = 0; i < 4; i++) 
    {
        arr[i] = arr[i + 1];
    }

    arr[4] = first;

    for(int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    return 0;

}