//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a = 20, b = 15;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping logic
    a = a + b; // a becomes 35
    b = a - b; // b becomes 20 (35 - 15)
    a = a - b; // a becomes 15 (35 - 20)

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}