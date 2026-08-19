//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    // 1. Validate Triangle Inequality Theorem: The sum of any two sides must be greater than the third
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2) &&
        (side1 > 0 && side2 > 0 && side3 > 0)) {

        // 2. Classify based on equal sides
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral (all three sides are equal).\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles (two sides are equal).\n");
        } else {
            printf("The triangle is Scalene (all three sides are different).\n");
        }

    } else {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}


