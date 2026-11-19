//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int num, original_num, remainder, result = 0, n = 0;
    scanf("%d", &num);
    original_num = num;

    // Count the number of digits
    while (original_num != 0) {
        original_num /= 10;
        ++n;
    }

    original_num = num;

    // Calculate the sum of the nth power of each digit
    while (original_num != 0) {
        remainder = original_num % 10;
        result += pow(remainder, n);
        original_num /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}