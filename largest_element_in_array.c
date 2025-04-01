#include<stdio.h>

int find_max(int arr[], int num)
{
    int max = arr[0];

    for(int i = 1; i < num; i++)
    {

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;

}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int num = sizeof (arr) / sizeof(arr[0]);

    printf("Largest Element in an array : %d\n", find_max(arr, num));

    return 0;

}