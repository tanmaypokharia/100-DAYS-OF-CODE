//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int main() {
    int nums[] = {3, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int majority = -1;
    int count = 0;

    // Find the majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            majority = nums[i];
        }
        if (nums[i] == majority) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if the found element is indeed the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == majority) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("Majority element: %d\n", majority);
    } else {
        printf("No majority element exists.\n");
    }

    return 0;
}