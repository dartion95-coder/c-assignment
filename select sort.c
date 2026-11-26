#include <stdio.h>

void sel_sort(int *array, int n)
{
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++)
    {
        // Find the index of the minimum element
        min_idx = i;

        for (j = i + 1; j < n; j++)
        {
            if (*(array + j) < *(array + min_idx))
            {
                min_idx = j;
            }
        }

        // Swap the minimum element
        if (min_idx != i)
        {
            temp = *(array + i);
            *(array + i) = *(array + min_idx);
            *(array + min_idx) = temp;
        }
    }
}

int main(void)
{
    int array[25], n, i;

    printf("Enter number of elements to sort: ");
    scanf("%d", &n);

    if (n <= 0 || n > 25)
    {
        printf("Invalid number of elements!");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    sel_sort(array, n);

    printf("Sorted elements are:\n");

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
