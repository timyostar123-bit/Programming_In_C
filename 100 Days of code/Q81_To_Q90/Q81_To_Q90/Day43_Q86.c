/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, length = 0, flag = 1;
    
    printf("Enter a string:\n");
    scanf("%[^\n]s", str);

    // Calculate length manually
    while(str[length] != '\0') {
        length++;
    }

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}
