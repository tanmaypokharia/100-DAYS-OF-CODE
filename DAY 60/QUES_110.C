//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h> 
#include <limits.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    for (int i = 0; i <= n - k; i++) {
        int max_element = INT_MIN;
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max_element) {
                max_element = arr[j];
            }
        }
        printf("%d ", max_element);
    }

    return 0;
}