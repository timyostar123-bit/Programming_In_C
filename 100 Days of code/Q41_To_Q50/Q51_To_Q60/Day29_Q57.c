/* Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);   

    int arr[n];

    // input elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add directly while reading
    }

    // print sum
    printf("%d", sum);

    return 0;
}
