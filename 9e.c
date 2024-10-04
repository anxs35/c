#include <stdio.h>

// Returns the length of the string pointed to by str
int strlen(const char *str) {
  int len = 0;
  while (*str != '\0') {
    len++;
    str++;
  }
  return len;
}

// Copies the string pointed to by src to the memory pointed to by dest
void strcpy(char *dest, const char *src) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}

// Concatenates the string pointed to by src to the end of the string pointed to by dest
void strcat(char *dest, const char *src) {
  int i = strlen(dest);
  int j = 0;
  while (src[j] != '\0') {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
}

// Reverses the string pointed to by str
void strrev(char *str) {
  int i = 0;
  int j = strlen(str) - 1;
  while (i < j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}
