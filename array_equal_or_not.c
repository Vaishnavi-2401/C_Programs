#include<stdio.h>

int main() 
{
    int size;

    printf("Enter the size of the arrays : ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter Elements of 1st Array : \n");

    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter Elements of 2nd Array : \n");

    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int equal = 1;

    for(int i = 0; i < size; i++) 
    {
        if(arr1[i] != arr2[i]) 
        {
            equal = 0;

            break;
        }
    }

    if(equal) 
    {
        printf("Arrays are Equal!\n");       
    }
    else 
    {
        printf("Arrays are Not Equal!\n");
    }

    return 0;

}