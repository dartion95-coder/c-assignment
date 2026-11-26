/* Decimal to binary conversion program */
#include <stdio.h>

int main(void)
{
    int n, i;
    int b[8];

    printf("Enter a number (0-255): ");
    scanf("%d", &n);

    if (n < 0 || n > 255)
    {
        printf("Number is invalid.\n");
        return 0;
    }

    printf("Binary equivalent of %d is: ", n);

    for (i = 0; i <= 7; i++)
    {
        b[i] = n % 2;
        n = n / 2;
    }

    for (i = 7; i >= 0; i--)
    {
        printf("%d", b[i]);
    }

    printf("\n");

    return 0;
}
