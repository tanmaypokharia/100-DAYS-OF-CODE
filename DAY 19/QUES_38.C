//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {    
    int num, sum = 0;
    scanf("%d", &num);
    
    while (num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }
    
    printf("%d\n", sum);
    return 0;
}