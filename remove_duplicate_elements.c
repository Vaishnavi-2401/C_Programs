#include<stdio.h>

int main() 
{
    int arr[] = {1, 5, 3, 2, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array : ");

    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nAfter Removing Duplicates : ");

    for(int i = 0; i < n; i++) 
    {
        int duplicate = 0;

        for(int j = 0; j < i; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                duplicate = 1;

                break;
            }
        }

        if(duplicate == 0) 
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;

}