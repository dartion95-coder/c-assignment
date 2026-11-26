#include <stdio.h>

int main(void)
{
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = arr;  // Pointer points to the first element of the array

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);  // Reading using pointer
    }

    printf("\nArray elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);  // Displaying using array indexing
    }

    printf("\n");

    return 0;
}
