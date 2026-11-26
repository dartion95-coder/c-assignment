#include <stdio.h>

int main(void)
{
    int i, n;
    int a[100];
    int sum = 0;
    int min, max;
    float avg = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements to array:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    // Finding largest and smallest
    min = a[0];
    max = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];

        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("\nLargest element = %d", max);
    printf("\nSmallest element = %d", min);
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}
