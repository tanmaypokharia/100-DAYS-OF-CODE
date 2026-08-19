//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);

    // Check if the input is a valid alphabet
    if (isalpha(ch)) {
        // Convert to lowercase to simplify the condition
        char lower_ch = tolower(ch);

        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}