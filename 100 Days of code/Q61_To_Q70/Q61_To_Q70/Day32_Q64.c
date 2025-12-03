/* Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, maxCount = 0, mostFreq = 0;

    // Input
    printf("Enter an integer number: ");
    scanf("%lld", &n);

    // Count digits
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    // Find the most frequent digit
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFreq = i;
        }
    }

    // Output
    printf("The digit that occurs the most times is: %d\n", mostFreq);

    return 0;
}
