#include<stdio.h>

int main() 
{
    int arr[] = {1, 5, 3, 2, 3, 1, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements : ");

    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nDuplicate Elements : ");
    
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                printf("%d  ", arr[i]);

                break; 
            }
        }
    }

    printf("\n");

    return 0;

}