//Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++);

    // Reverse the string
    for (j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
