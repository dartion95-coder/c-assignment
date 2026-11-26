#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Sequence:\n");

    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            printf("%d\n", first);
            continue;
        }

        if(i == 2)
        {
            printf("%d\n", second);
            continue;
        }

        next = first + second;
        first = second;
        second = next;

        printf("%d\n", next);
    }

    return 0;
}
