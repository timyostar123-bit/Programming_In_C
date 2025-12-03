/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
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
        for(int j = i + 1; j < r; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
