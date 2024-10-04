#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

void countCharacters(char* str, int* vowels, int* spaces, int* consonants, int* uppercase, int* lowercase);

int main() {
    char str[MAX_LENGTH];
    int vowels = 0, spaces = 0, consonants = 0, uppercase = 0, lowercase = 0;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    countCharacters(str, &vowels, &spaces, &consonants, &uppercase, &lowercase);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of white spaces: %d\n", spaces);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of uppercase characters: %d\n", uppercase);
    printf("Number of lowercase characters: %d\n", lowercase);

    return 0;
}

void countCharacters(char* str, int* vowels, int* spaces, int* consonants, int* uppercase, int* lowercase) {
    int i = 0;
    char ch;

    while ((ch = str[i]) != '\0') {
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            (*spaces)++;
        } else if (isalpha(ch)) {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }

            if (isupper(str[i])) {
                (*uppercase)++;
            } else {
                (*lowercase)++;
            }
        }

        i++;
    }
}
