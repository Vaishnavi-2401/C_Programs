#include<stdio.h>

int main() 
{
    int size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter %d Elements : \n", size);

    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int sorted = 1;

    for(int i = 0; i < size - 1; i++) 
    {
        if(arr[i] > arr[i + 1]) 
        {
            sorted = 0;

            break;
        }
    }

    if(sorted == 1) 
    {
        printf("Array is Sorted!\n");
    }
    else 
    {
        printf("Array is Not Sorted!\n");
    }

    return 0;
    
}