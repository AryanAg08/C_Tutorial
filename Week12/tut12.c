#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[ROWS][COLS] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int C[ROWS][COLS];

    int (*pA)[COLS] = A;
    int (*pB)[COLS] = B;
    int (*pC)[COLS] = C;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < COLS; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("Matrix A:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", pA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", pB[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", pC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
