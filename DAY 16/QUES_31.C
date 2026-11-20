//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
void print_binary(int num) {
    if (num > 1) {
        print_binary(num / 2);
    }
    printf("%d", num % 2);
} 