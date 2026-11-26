
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

// Function to add two matrices
void addMat(int mat1[][COLS], int mat2[][COLS],
            int mat3[][COLS], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main(void)
{
    int mat1[ROWS][COLS], mat2[ROWS][COLS];
    int sum[ROWS][COLS];
    int rows1, cols1, rows2, cols2;

    printf("Enter Matrix_1 rows and columns: ");
    scanf("%d%d", &rows1, &cols1);

    printf("Enter Matrix_2 rows and columns: ");
    scanf("%d%d", &rows2, &cols2);

    // Check valid sizes
    if (rows1 > ROWS || cols1 > COLS ||
        rows2 > ROWS || cols2 > COLS ||
        rows1 <= 0 || cols1 <= 0 ||
        rows2 <= 0 || cols2 <= 0)
    {
        printf("Matrix size exceeds allowed %dx%d\n", ROWS, COLS);
        return 1;
    }

    // Check compatibility for addition
    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrices with entered dimensions cannot be added.\n");
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

    addMat(mat1, mat2, sum, rows1, cols1);

    printf("The sum of Mat_1 and Mat_2 is:\n");
    showMat(sum, rows1, cols1);

    return 0;
}
