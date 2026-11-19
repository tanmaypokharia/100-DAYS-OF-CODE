//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int x = 3;
    int len = sizeof(arr) / sizeof(arr[0]);
    int ceil_index = -1;

    // Find the ceil of x
    for (int i = 0; i < len; i++) {
        if (arr[i] >= x) {
            ceil_index = i;
            break;
        }
    }

    // Print the result
    printf("Index of ceil of %d: %d\n", x, ceil_index);

    return 0;
}