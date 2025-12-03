/* Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Get text from user
    printf("Enter text to append: ");
    getchar();  // Clear leftover newline from buffer (optional if needed)
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}