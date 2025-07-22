#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;
    int n;

    // Input principal, rate, time, and number of times interest compounded per year
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    printf("Enter number of times interest compounded per year: ");
    scanf("%d", &n);

    // Calculate compound amount
    amount = principal * pow((1 + (rate / (100 * n))), n * time);

    // Calculate compound interest
    compound_interest = amount - principal;

    // Output the results
    printf("Compound Interest = %.2lf\n", compound_interest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}
