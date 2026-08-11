//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user for input
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}