// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt user and read inputs line-by-line
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    // Calculate arithmetic results
    int sum      = num1 + num2;
    int diff     = num1 - num2;
    int product  = num1 * num2;
    int quotient = num1 / num2; // Integer division

    // Print formatted results
    printf("Sum=%d\n Diff=%d\n Product=%d\n Quotient=%d\n", 
            sum, diff, product, quotient);

    return 0;
}