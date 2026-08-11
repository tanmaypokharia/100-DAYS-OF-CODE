//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    // Prompt user for input
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    // Calculate Area and Perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}