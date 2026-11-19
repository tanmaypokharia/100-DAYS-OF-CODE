//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int binary_num, ones_complement = 0, place_value = 1;
    scanf("%d", &binary_num);
    
    while (binary_num > 0) {
        int digit = binary_num % 10;
        // Flip the bit: 0 becomes 1 and 1 becomes 0
        int flipped_digit = (digit == 0) ? 1 : 0;
        ones_complement += flipped_digit * place_value;
        place_value *= 10;
        binary_num /= 10;
    }
    
    printf("%d\n", ones_complement);
    return 0;
}