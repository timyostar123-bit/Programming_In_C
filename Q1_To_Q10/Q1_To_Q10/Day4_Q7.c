/*Q7: Write a program to swap two numbers without using a third variable.


Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first No. :");
    scanf("%d", &a);
    printf("Enter the second No. :");
    scanf("%d", &b); 
   
    a = a + b;  // Step 1: sum of a and b stored in a
    b = a - b;  // Step 2: (a+b - b) = original a
    a = a - b;  // Step 3: (a+b - a) = original b

    printf("After swap first no.: %d \n", a);
    printf("After swap second no.: %d \n", b);
    

    return 0;
}
