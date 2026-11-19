//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];

    // Calculate the product of all elements to the left of each element
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Calculate the product of all elements to the right of each element and multiply with the left product
    int right_product = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= right_product;
        right_product *= nums[i];
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        printf("answer[%d] = %d\n", i, answer[i]);
    }

    return 0;
}