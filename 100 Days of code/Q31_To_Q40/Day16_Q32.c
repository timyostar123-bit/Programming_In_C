/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter The number :");
    scanf("%d", &num);

    original = num; // store original number

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;           // take last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                 // remove last digit
    }

    // Check if palindrome
    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}
