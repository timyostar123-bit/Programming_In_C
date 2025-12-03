/* Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[200];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file! Make sure info.txt exists.\n");
        return 1;
    }

    // Read and print file contents line by line
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}