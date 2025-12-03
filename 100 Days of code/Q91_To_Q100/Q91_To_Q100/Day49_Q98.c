/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char words[10][30];
    int i = 0, j = 0, k = 0;
    
    printf("Enter a full name: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real applications

    // Split the string into words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        } else {
            words[k][j++] = str[i];
        }
    }
    words[k][j] = '\0';
    int totalWords = k + 1;

    printf("Output: ");
    
    // Print initials for all except the last word
    for (i = 0; i < totalWords - 1; i++) {
        char ch = words[i][0];
        if (ch >= 'a' && ch <= 'z') ch -= 32;  // convert to uppercase
        printf("%c.", ch);
    }

    // Print the last word (surname) in full
    printf(" %s\n", words[totalWords - 1]);
    
    return 0;
}
