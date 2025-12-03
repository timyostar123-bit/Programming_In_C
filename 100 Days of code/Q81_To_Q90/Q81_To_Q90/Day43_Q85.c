/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, length = 0;
    
    printf("Enter a string:\n");
    scanf("%[^\n]s", str);

    // Calculate length manually
    while(str[length] != '\0') {
        length++;
    }

    printf("Reversed string:\n");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
