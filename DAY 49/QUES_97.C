//Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    // Print the first character of the name
    printf("Initials: %c", name[0]);

    // Print the first character of each subsequent word
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");

    return 0;
}