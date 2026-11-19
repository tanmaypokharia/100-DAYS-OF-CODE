//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, product = 1, has_odd_digit = 0;
    scanf("%d", &num);
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            has_odd_digit = 1; // Mark that we have found at least one odd digit
        }
        num /= 10;
    }
    
    if (has_odd_digit) {
        printf("%d\n", product);
    } else {
        printf("No odd digits found.\n");
    }
    
    return 0;
}