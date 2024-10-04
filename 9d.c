#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int isPalindrome(char* str);

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int isPalindrome(char* str) {
    int length = strlen(str);
    int i, j;

    // Compare characters from both ends of the string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}
