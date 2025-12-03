/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(r != c) {
        printf("False");
        return 0;
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
