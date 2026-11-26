#include <stdio.h>

#define ROWS 10
#define COLS 10

// Function to read a matrix
void readMat(int mat[][COLS], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to display a matrix
void showMat(int mat[][COLS], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void prodMat(int mat1[][COLS], int mat2[][COLS],
             int mat3[][COLS], int rows1, int cols1, int cols2)
{
    int i, j, k;

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            mat3[i][j] = 0;

            for (k = 0; k < cols1; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main(void)
{
    int mat1[ROWS][COLS], mat2[ROWS][COLS];
    int mat3[ROWS][COLS];
    int rows1, cols1, rows2, cols2;

    printf("Enter Matrix_1 rows and columns: ");
    scanf("%d%d", &rows1, &cols1);

    printf("Enter Matrix_2 rows and columns: ");
    scanf("%d%d", &rows2, &cols2);

    if (rows1 > ROWS || cols1 > COLS ||
        rows2 > ROWS || cols2 > COLS ||
        rows1 <= 0 || cols1 <= 0 ||
        rows2 <= 0 || cols2 <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Check compatibility for multiplication
    if (cols1 != rows2)
    {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    printf("Enter Matrix_1 elements:\n");
    readMat(mat1, rows1, cols1);

    printf("Enter Matrix_2 elements:\n");
    readMat(mat2, rows2, cols2);

    printf("Matrix_1:\n");
    showMat(mat1, rows1, cols1);

    printf("Matrix_2:\n");
    showMat(mat2, rows2, cols2);

    prodMat(mat1, mat2, mat3, rows1, cols1, cols2);

    printf("Product of Matrix_1 and Matrix_2 is:\n");
    showMat(mat3, rows1, cols2);

    return 0;
}
