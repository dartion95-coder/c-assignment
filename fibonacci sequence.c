#include <stdio.h>

void bub_sort(int *array, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (*(array + j) > *(array + j + 1))
            {
                temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}

int main(void)
{
    int array[25], n, i;

    repeat:
    printf("\nEnter number of elements to sort: ");
    scanf("%d", &n);

    if (n > 25 || n <= 0)
    {
        printf("\nEnter a maximum count of 25...!");
        goto repeat;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    bub_sort(array, n);

    printf("\nSorted elements are:\n");

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
