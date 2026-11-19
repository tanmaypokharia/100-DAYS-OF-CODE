//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    int i, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Reverse the entire string
    reverseString(str, 0, len - 1);

    // Reverse each word back to its original orientation
    int start = 0;
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseString(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}