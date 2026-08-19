//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c (ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Validate that 'a' is not zero
    if (a == 0) {
        printf("Error: 'a' cannot be 0 in a quadratic equation.\n");
        return 1;
    }

    // Calculate discriminant: D = b^2 - 4ac
    discriminant = (b * b) - (4 * a * c);

    printf("\n--- Result ---\n");

    // Case 1: Real and distinct roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Type  : Real and Distinct\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    // Case 2: Real and equal roots
    else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("Type  : Real and Equal\n");
        printf("Root 1 = Root 2 = %f\n", root1);
    }
    // Case 3: Complex conjugate roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        printf("Type  : Complex and Imaginary\n");
        printf("Root 1: %f + %fi\n", realPart, imagPart);
        printf("Root 2: %f - %fi\n", realPart, imagPart);
    }

    return 0;
}