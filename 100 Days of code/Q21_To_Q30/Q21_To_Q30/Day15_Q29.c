/* Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // use long long for large results

    printf("enter the Number : ");
    scanf("%d", &n);

    // Factorial calculation
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Output result
    printf("%lld\n", fact);

    return 0;
}
