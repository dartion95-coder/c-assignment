#include <stdio.h>

int binary_search(int *array, int size, int key)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (*(array + mid) == key)
        {
            return mid;  // Key found, return index
        }
        else if (*(array + mid) < key)
        {
            left = mid + 1;  // Key is in the right half
        }
        else
        {
            right = mid - 1;  // Key is in the left half
        }
    }

    return -1;  // Key not found
}

int main(void)
{
    int array[25], n, key, result, i;

    printf("Enter number of elements (max 25): ");
    scanf("%d", &n);

    if (n > 25 || n <= 0)
    {
        printf("Invalid number of elements!");
        return 0;
    }

    printf("Enter %d elements in ascending order:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", array + i);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    result = binary_search(array, n, key);

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
