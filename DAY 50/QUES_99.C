//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[12];
    int i;

    printf("Enter a date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Remove newline character if present
    if (date[strlen(date) - 1] == '\n') {
        date[strlen(date) - 1] = '\0';
    }

    // Extract day, month, and year
    int day = (date[0] - '0') * 10 + (date[1] - '0');
    int month = (date[3] - '0') * 10 + (date[4] - '0');
    int year = (date[7] - '0') * 1000 + (date[8] - '0') * 100 + (date[9] - '0') * 10 + (date[10] - '0');

    // Print the date in the new format
    printf("Date in new format: %d-", day);
    switch (month) {
        case 1:
            printf("Jan");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("Mar");
            break;
        case 4:
            printf("Apr");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("Jun");
            break;
        case 7:
            printf("Jul");
            break;
        case 8:
            printf("Aug");
            break;
        case 9:
            printf("Sep");
            break;
        case 10:
            printf("Oct");
            break;
        case 11:
            printf("Nov");
            break;
        case 12:
            printf("Dec");
            break;
    }
    printf("-%d\n", year);

    return 0;
}