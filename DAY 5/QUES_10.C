//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter total time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and remaining seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Display formatted time as HH:MM:SS (padded with leading zeros)
    printf("Formatted Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}