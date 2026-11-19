//Find the longest word in a sentence.
#include <stdio.h>
int main() {
    char str[100];
    int i, maxLength = 0, currentLength = 0;
    int startIndex = 0, maxStartIndex = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 0;
            startIndex = i + 1;
        }
    }

    // Check for the last word in case the string doesn't end with a space
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    printf("Longest word: ");
    for (i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}