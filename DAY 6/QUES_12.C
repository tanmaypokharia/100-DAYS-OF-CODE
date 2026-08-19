//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Outer if-else checks whether the number is greater than or equal to 0
    if (num >= 0) {
        // Inner if-else determines if it is zero or strictly positive
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("%d is Positive.\n", num);
        }
    } else {
        printf("%d is Negative.\n", num);
    }

    return 0;
}