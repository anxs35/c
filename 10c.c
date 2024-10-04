#include <stdio.h>

#define BUFFER_SIZE 1024

int main() {
    FILE* sourceFile;
    FILE* destinationFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    // Open the source file for reading
    sourceFile = fopen("a.txt", "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    // Open the destination file for writing
    destinationFile = fopen("b.txt", "w");
    if (destinationFile == NULL) {
        printf("Failed to open the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
