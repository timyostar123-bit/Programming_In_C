/* Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // input size of the array (n elements, one missing from 0 to n)
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);  // input array elements

    // Expected sum of numbers from 0 to n
    int total_sum = n * (n + 1) / 2;

    // Actual sum of given elements
    int actual_sum = 0;
    for (int i = 0; i < n; i++)
        actual_sum += arr[i];

    // Missing number = total_sum - actual_sum
    int missing = total_sum - actual_sum;

    printf("%d", missing);

    return 0;
}