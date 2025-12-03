/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0;
    
    printf("Enter a sentence: ");
    gets(str); 
    
    int len = strlen(str);
    char *word_start = NULL;
    
    while (i <= len) {
        if (word_start == NULL && str[i] != ' ' && str[i] != '\0') {
            word_start = &str[i];
        }
        if ((str[i] == ' ' || str[i] == '\0') && word_start != NULL) {
            reverse(word_start, &str[i - 1]);
            word_start = NULL;
        }
        i++;
    }
    
    printf("Output: %s\n", str);
    return 0;
}
