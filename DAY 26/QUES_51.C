// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
int main() {    
    int n = 5; // Number of rows for the pattern

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        // Print numbers in decreasing order
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}