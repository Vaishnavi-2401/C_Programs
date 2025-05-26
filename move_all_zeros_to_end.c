#include<stdio.h>

int main() 
{
    int arr[5] = {0, 1, 0, 3, 12};

    int j = 0;

    for(int i = 0; i < 5; i++) 
    {
        if (arr[i] != 0) 
        {
            arr[j] = arr[i];

            j++;
        }
    }

    while(j < 5) 
    {
        arr[j] = 0;

        j++;
    }

    for(int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;

}