/* Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    if (temp == 0) // handle special case for input 0
        product = 1;
    else {
        while (temp != 0) {
            digit = temp % 10;
            if (digit % 2 == 1) {
                product *= digit;
                hasOdd = 1;
            }
            temp /= 10;
        }
    }
    if (!hasOdd)
        product = 1;
    printf("Product of odd digits: %d\n", product);
    return 0;
}
