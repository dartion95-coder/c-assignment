#include <stdio.h>

int main(void)
{
    int arr[100], i, n;
    int *ptr;

    ptr = arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    // Reading elements using POINTERS
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Elements in reverse order:\n");

    // Printing elements in reverse using POINTERS
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
