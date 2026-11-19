// Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****
#include <stdio.h>
int main() {
    int n = 5; // Number of rows for the pattern

    for (int i = 0; i < n; i++) {
        // Print stars
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}