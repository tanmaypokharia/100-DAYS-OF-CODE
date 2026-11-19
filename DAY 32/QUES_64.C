//Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main() {
    int num = 1223334444;
    int count[10] = {0};
    int max_count = 0;
    int max_digit = 0;

    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        if (count[digit] > max_count) {
            max_count = count[digit];
            max_digit = digit;
        }
        num /= 10;
    }

    printf("The digit that occurs the most times is %d with %d occurrences.\n", max_digit, max_count);

    return 0;
}