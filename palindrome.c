#include <stdio.h>

int main(void)
{
    long long int n, num;
    int digit[100];
    int i = 0, j = 0, sum = 0;

    printf("Enter number: ");
    scanf("%lld", &num);

    n = num;

    while(n != 0)
    {
        digit[i] = n % 10;
        n = n / 10;
        sum = sum + digit[i];
        i++;
    }

    printf("Sum of digits in %lld is: %d\n", num, sum);

    j = i - 1;
    i = 0;

    while(i < j)
    {
        if(digit[i] == digit[j])
        {
            i++;
            j--;
        }
        else
        {
            printf("and the number is not a palindrome.\n");
            return 0;
        }
    }

    printf("and the number is a palindrome.\n");

    return 0;
}
