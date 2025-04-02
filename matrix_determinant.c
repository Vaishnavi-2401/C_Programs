#include<stdio.h>

int main()
{
    int m[2][2];
    int det;

    printf("Enter Elements for Matrix : \n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Elements[2][2] : \n", i ,j);
            scanf("%d", &m[i][j]);
        }
    }

    det = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);

    printf("Determinant : %d\n", det);

    return 0;
    
}