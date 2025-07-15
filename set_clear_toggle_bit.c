#include<stdio.h>

int main() 
{
    int num, bit;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Enter bit position to modify (0-31) : ");
    scanf("%d", &bit);

    printf("Original Number : %d\n", num);

    //Set Bit
    int set = num | (1 << bit);
    printf("After Setting Bit %d : %d\n", bit, set);

    //Clear Bit
    int clear = num & ~(1 << bit);
    printf("After Clearing Bit %d : %d\n", bit, clear);

    //Toggle Bit
    int toggle = num ^ (1 << bit);
    printf("After Toggling Bit %d : %d\n", bit, toggle);

    return 0;

}