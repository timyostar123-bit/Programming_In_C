/* Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i;

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Assuming elements are in range 0 to n-1
    int freq[n];
    for(i = 0; i < n; i++)
        freq[i] = 0;

    // One traversal to detect repeated element
    for(i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    // Should not reach here as one element always repeats
    return 0;
}