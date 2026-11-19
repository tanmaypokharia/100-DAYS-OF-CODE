//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int swap_first_last_digit(int num) {
    int last_digit = num % 10;
    int first_digit = num;
    int digits_count = 0;

    // Count the number of digits and find the first digit
    while (first_digit >= 10) {
        first_digit /= 10;
        digits_count++;
    }

    // Calculate the multiplier for the first digit
    int multiplier = 1;
    for (int i = 0; i < digits_count; i++) {
        multiplier *= 10;
    }

    // Swap the first and last digit
    int swapped_num = last_digit * multiplier + (num % multiplier) / 10 * 10 + first_digit;

    return swapped_num;
}