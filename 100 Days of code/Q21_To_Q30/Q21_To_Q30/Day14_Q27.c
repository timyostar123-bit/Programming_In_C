/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("enter the value of n :");
    scanf("%d", &n);
    

    // Loop for first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); // i-th odd number = 2*i - 1
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
