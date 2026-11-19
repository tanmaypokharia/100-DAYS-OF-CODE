//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0, j = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String without vowels: %s\n", str);
    return 0;
}
