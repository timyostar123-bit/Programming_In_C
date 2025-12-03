/* Write a program to take a string input. Change it to sentence case.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Convert entire string to lowercase first
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Capitalize first non-space character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("%s", str);
    return 0;
}