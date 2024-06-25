// Calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
	
    float principal, rate, time, amount, compound_interest;

    printf("Enter amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate / 100, time);

    compound_interest = amount - principal;

    printf("Compound interest after %.0f years: %.0f", time, compound_interest);

    return 0;
}
