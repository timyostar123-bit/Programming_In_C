/*Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    printf("Enter value of n: ");
    scanf("%d", &n);


    for (i = 2; i <= n; i++) {   // start from 2, since 1 is not prime
        isPrime = 1;             // assume i is prime
        for (j = 2; j * j <= i; j++) {  // check divisibility up to √i
            if (i % j == 0) {
                isPrime = 0;     // not prime
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}
