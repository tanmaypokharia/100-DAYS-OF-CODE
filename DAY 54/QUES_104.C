//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int x = -1;
    int left_sum = 0;
    int right_sum = 0;

    // Calculate the sum of all elements from 1 to n
    for (int i = 1; i <= n; i++) {
        right_sum += i;
    }

    // Find the pivot integer
    for (int i = 1; i <= n; i++) {
        right_sum -= i;
        if (left_sum == right_sum) {
            x = i;
            break;
        }
        left_sum += i;
    }

    // Print the result
    printf("Pivot integer: %d\n", x);

    return 0;
}