//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // A year is a leap year if:
    // 1. It is divisible by 400, OR
    // 2. It is divisible by 4 AND NOT divisible by 100
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}