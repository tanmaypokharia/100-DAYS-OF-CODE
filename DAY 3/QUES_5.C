//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display result rounded to 2 decimal places
    printf("%f°C is equal to %f°F\n", celsius, fahrenheit);

    return 0;
}