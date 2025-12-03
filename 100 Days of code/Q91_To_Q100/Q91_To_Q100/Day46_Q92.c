/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    char repeat = '\0';
    
    printf("Enter a string: ");
    gets(str);  
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                repeat = str[i];
                break;
            }
        }
    }
    
    if (repeat != '\0')
        printf("Output: %c\n", repeat);
    else
        printf("Output: No repeating character\n");
    
    return 0;
}
