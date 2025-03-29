#include<stdio.h>

int main()
{
    int num;
    int t1 = 0, t2 = 1;
    int next_term = t1 + t2;

    printf("Enter the Number : \n");
    scanf("%d", &num);

    printf("Fibonacci Series : %d %d ", t1, t2);

    for(int i = 3; i <= num; i++)
    {
        printf("%d ", next_term);
        
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }

    return 0;

}