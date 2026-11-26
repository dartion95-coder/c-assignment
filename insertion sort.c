#include <stdio.h>

void insertion_sort(int *array, int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = *(array + i);
        j = i - 1;

        // Shift elements greater than key
        while (j >= 0 && *(array + j) > key)
        {
            *(array + j + 1) = *(array + j);
            j = j - 1;
        }

        // Insert key into correct position
        *(array + j + 1) = key;
    }
}

int main(void)
{
    int array[25], n, i;

    again:
    printf("\nEnter number of elements to sort (max 25): ");
    scanf("%d", &n);

    if (n > 25 || n <= 0)
    {
        printf("Number of elements exceeds maximum allowed (25).\n");
        goto again;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    insertion_sort(array, n);

    printf("\nSorted elements are:\n");

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
