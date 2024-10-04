#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Names entered:\n");

    // Check if any command-line arguments are provided
    if (argc > 1) {
        // Iterate through command-line arguments
        for (int i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("No names entered.\n");
    }

    return 0;
}
