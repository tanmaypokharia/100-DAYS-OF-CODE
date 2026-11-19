//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
#include <stdio.h>

int main() {
    int arr[] = {4, 5, 2, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int previous_greater = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous_greater = arr[j];
                break;
            }
        }
        printf("Previous greater element of %d is %d\n", arr[i], previous_greater);
    }

    return 0;
}