#include<stdio.h>

int main() 
{
    int arr[100], n, palindrome = 1;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    printf("Enter the Elements : ");

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n / 2; i++) 
    {
        if(arr[i] != arr[n - 1 - i]) 
        {
            palindrome = 0;

            break;
        }
    }

    if(palindrome)
    {
        printf("The Array is a Palindrome!\n");
    }
    else
    {
        printf("The Array is Not a Palindrome!\n");
    }

    return 0;
}