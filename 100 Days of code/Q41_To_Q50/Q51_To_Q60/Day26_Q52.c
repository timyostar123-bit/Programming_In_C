/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j;

    // Increasing part: 1, 3, 5 stars
    for (i = 1; i <= 5; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between blocks
    }

    // Decreasing part: 3, 1 stars
    for (i = 3; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        if (i != 1) // avoid extra blank line at the end
            printf("\n");
    }

    return 0;
}

