/*
Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, i = 0;
    
    printf("Enter a string:\n");
    scanf("%[^\n]s", str);
    
    while(str[i] != '\0') {
        char ch = str[i];
        
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    
    return 0;
}
