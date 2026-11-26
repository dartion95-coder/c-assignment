// Program to find max and min from three integers
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int min, max;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    min = (a < c) && (a < b) ? a : (b < c) ? b : c;
    max = (a > c) && (a > b) ? a : (b > c) ? b : c;

    printf("Smallest number is: %d\n", min);
    printf("Largest number is: %d\n", max);

    return 0;
}
