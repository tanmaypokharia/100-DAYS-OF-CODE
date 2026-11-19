//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    len = strlen(name);

    // Print the first character of the name
    printf("Initials: %c", name[0]);

    // Find the last space (surname)
    int surnameStart = -1;
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            surnameStart = i + 1;
            break;
        }
    }

    // Print the surname in full
    if (surnameStart != -1) {
        printf(" %s", &name[surnameStart]);
    }
    printf("\n");

    return 0;
}