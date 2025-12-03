/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a name: ");
    gets(str);  

    printf("Output: ");
    
    if (str[0] != ' ' && str[0] != '\0')
        printf("%c.", str[0] >= 'a' && str[0] <= 'z' ? str[0] - 32 : str[0]);  // first initial
    
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ' && str[i] != '\n')
            printf("%c.", str[i] >= 'a' && str[i] <= 'z' ? str[i] - 32 : str[i]);
    }
    
    printf("\n");
    return 0;
}
