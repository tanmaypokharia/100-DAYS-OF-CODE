//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, c;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Step-by-step swap using 'c' as the third variable
    c = a; // 1. Save original value of 'a' into 'c'
    a = b; // 2. Overwrite 'a' with value of 'b'
    b = c; // 3. Assign saved original value of 'a' from 'c' to 'b'

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}