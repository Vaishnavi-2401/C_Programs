#include <stdio.h>

#define MAX 5

int main()
{
    int m1[MAX][MAX], m2[MAX][MAX];
    int rows, cols, eq = 1;

    printf("Enter Number of Rows & Columns : \n");
    scanf("%d%d", &rows, &cols);

    //1st Matrix
    printf("Enter Elements for 1st Matrix : \n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Element[%d][%d] : ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    //2nd Matrix
    printf("Enter Elements for 2nd Matrix : \n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Element[%d][%d] : ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Check if matrices are equal
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(m1[i][j] != m2[i][j])
            {
                eq = 0;
                break;
            }
        }
        if(!eq)
        {
            break;
        }
    }

    if(eq)
    {
        printf("Matrices are Equal!\n");
    }
    else
    {
        printf("Matrices are Not Equal!\n");
    }

    return 0;
}