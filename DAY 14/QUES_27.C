//Write a program to print the sum of the first n odd numbers
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int odd = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + odd;
        odd = odd + 2; // Move to the next odd number
    }

    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}