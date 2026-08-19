//Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, total_amount;

    // Input values
    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter Annual Interest Rate (%%): ");
    scanf("%lf", &rate);

    printf("Enter Time Period (in years): ");
    scanf("%lf", &time);

    // Simple Interest Calculation
    simple_interest = (principal * rate * time) / 100.0;

    // Compound Interest Calculation (compounded annually)
    // Formula: A = P * (1 + R / 100)^T
    total_amount = principal * pow(1.0 + (rate / 100.0), time);
    compound_interest = total_amount - principal;

    // Output results
    printf("\n--- Results ---\n");
    printf("Simple Interest   : %f\n", simple_interest);
    printf("Total Amount (SI) : %f\n\n", principal + simple_interest);

    printf("Compound Interest : %f\n", compound_interest);
    printf("Total Amount (CI) : %f\n", total_amount);

    return 0;
}