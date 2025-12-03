/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int sum = 0;

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // adding element to sum
        }
    }

    // Printing sum of all elements
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
