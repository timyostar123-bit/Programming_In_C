/* Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

// Function to find HCF using Euclidean algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, h, lcm;

    /
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    h = hcf(a, b);

    // LCM formula
    lcm = (a * b) / h;

    printf("%d\n", lcm);

    return 0;
}
