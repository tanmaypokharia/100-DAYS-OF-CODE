//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int max_sum = INT_MIN;

    // Calculate the sum of the first subarray of size k
    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;

    // Use sliding window technique to find the maximum sum
    for (int i = 1; i <= n - k; i++) {
        current_sum = current_sum - arr[i - 1] + arr[i + k - 1];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d is %d\n", k, max_sum);

    return 0;
}