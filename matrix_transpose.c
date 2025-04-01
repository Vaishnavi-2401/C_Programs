#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter Number of Rows & Columns : \n");
    scanf("%d%d", &rows, &cols);

    int m1[rows][cols], m2[cols][rows];

    //1st Matrix
    printf("Enter Elements for 1st Matrix : \n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Element[%d][%d] : ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }

    // Compute Transpose
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            m2[j][i] = m1[i][j];
        }
    }

    // Print Transposed Matrix
    printf("Transpose of the Matrix : \n");

    for(int i = 0; i < cols; i++)
    {

        for(int j = 0; j < rows; j++)
        {
            printf("%d ", m2[i][j]);
        }

        printf("\n");

    }

    return 0;

}