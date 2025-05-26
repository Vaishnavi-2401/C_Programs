#include<stdio.h>

int main() 
{
    int arr[] = {12, 45, 7, 89, 23, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum Element : %d\n", max);
    printf("Minimum Element : %d\n", min);

    return 0;
}