#include<stdio.h>

int find_min(int arr[], int num)
{
    int min = arr[0];

    for(int i = 1; i < num; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int num = sizeof(arr) / sizeof(arr[0]);

    printf("Smallest Element in an array : %d\n", find_min(arr, num));

    return 0;
    
}