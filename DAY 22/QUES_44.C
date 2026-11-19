//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    double sum = 0.0;
    for(int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;
        sum += (double)numerator / denominator;
    }

    printf("%.6lf\n", sum);
    return 0;
}