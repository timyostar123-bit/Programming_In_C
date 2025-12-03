/* Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

*/

#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    int answer[n];
    int prefix[n];
    int suffix[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Compute prefix products
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Compute suffix products
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Compute final answer
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    // Print the result array
    printf("Resultant array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}