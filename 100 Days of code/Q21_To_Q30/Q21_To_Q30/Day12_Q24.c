/* Q24: Write a program to calculate an electricity bill based on units consumed.


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter the Units:");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 9);
    } 
    else {
        bill = (100 * 5) + (100 * 9) + ((units - 200) * 16);
    }

    printf("Bill: Rupees%d\n", bill);

    return 0;
}
