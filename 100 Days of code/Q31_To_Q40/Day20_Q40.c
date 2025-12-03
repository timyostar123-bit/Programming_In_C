/* Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], onesComp[100];
    int i, length;
    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    for(i = 0; i < length; i++) {
        if(binary[i] == '1')
            onesComp[i] = '0';
        else if(binary[i] == '0')
            onesComp[i] = '1';
        else {
            printf("Invalid input\n");
            return 1;
        }
    }
    onesComp[length] = '\0';
    printf("1's complement: %s\n", onesComp);
    return 0;
}
