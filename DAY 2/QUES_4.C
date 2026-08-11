#include <stdio.h>

#define PI 3.14159

int main() {
    float radius;
    float area, circumference;

    // Prompt user for input
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calculate Area and Circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results formatted to 2 decimal places
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}