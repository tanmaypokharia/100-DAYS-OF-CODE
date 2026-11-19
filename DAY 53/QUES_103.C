//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int left_sum = 0;
    int right_sum = 0;
    int pivot_index = -1;

    // Calculate the total sum of the array
    for (int i = 0; i < len; i++) {
        right_sum += arr[i];
    }

    // Find the pivot index
    for (int i = 0; i < len; i++) {
        right_sum -= arr[i];
        if (left_sum == right_sum) {
            pivot_index = i;
            break;
        }
        left_sum += arr[i];
    }

    // Print the result
    printf("Pivot index: %d\n", pivot_index);

    return 0;
}