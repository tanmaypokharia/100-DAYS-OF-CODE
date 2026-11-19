//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main() {
    int arr[] = {-1, 2, -3, 4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    for (int i = 0; i <= n - k; i++) {
        int first_negative = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break;
            }
        }
        printf("%d ", first_negative);
    }

    return 0;
}