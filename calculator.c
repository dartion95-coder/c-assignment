// Largest and smallest
#include <stdio.h>

int main(void)
{
    int x, y, z;
    char op;

    printf("\nEnter the operator: ");
    scanf(" %c", &op);

    printf("\nEnter two numbers x and y: ");
    scanf("%d%d", &x, &y);

    switch(op)
    {
        case '+':
            z = x + y;
            printf("\nSum of %d and %d is: %d", x, y, z);
            break;

        case '-':
            z = x - y;
            printf("\nDifference of %d and %d is: %d", x, y, z);
            break;

        case '*':
            z = x * y;
            printf("\nProduct of %d and %d is: %d", x, y, z);
            break;

        case '/':
            if(y != 0)
                printf("\nQuotient of %d divided by %d is: %d", x, y, x / y);
            else
                printf("\nDivision by zero is not possible");
            break;

        case '%':
            if(y != 0)
                printf("\nRemainder of %d divided by %d is: %d", x, y, x % y);
            else
                printf("\nDivision by zero is not possible");
            break;

        default:
            printf("\nInvalid operator");
    }

    return 0;
}
