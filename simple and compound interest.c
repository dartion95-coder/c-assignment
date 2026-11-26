// Program to compute simple and compound interest
#include <stdio.h>
#include <math.h>

int main(void)
{
    double p, t, r;
    double si, ci;

    printf("Enter principal amount: ");
    scanf("%lf", &p);

    printf("Enter tenure in years: ");
    scanf("%lf", &t);

    printf("Enter interest rate: ");
    scanf("%lf", &r);

    si = (p * t * r) / 100;

    ci = p * (pow((1 + (r / 100)), t) - 1);

    printf("Simple interest is: %lf\n", si);
    printf("Compound interest is: %lf\n", ci);

    return 0;
}
