/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
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

    for(int d = 0; d < r + c - 1; d++) {
        int i = (d < c) ? 0 : d - c + 1;
        int j = (d < c) ? d : c - 1;
        
        while(i < r && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
