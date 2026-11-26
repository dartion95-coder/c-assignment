#include <stdio.h>

int linear_search(int *array, int size, int key)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (*(array + i) == key)
        {
            return i;  // Key found, return index
        }
    }

    return -1;  // Key not found
}

int main(void)
{
    int array[25], n, key, result, i;

again:
    printf("Enter number of elements (max 25): ");
    scanf("%d", &n);

    if (n > 25 || n <= 0)
    {
        printf("Number of elements exceeds maximum allowed (25).\n");
        goto again;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", array + i);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    result = linear_search(array, n, key);

    if (result != -1)
    {
        printf("Element found at position %d\n", result + 1);
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}
