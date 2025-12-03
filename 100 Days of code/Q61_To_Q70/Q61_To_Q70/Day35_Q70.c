/*Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[50];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);
    k = k % n; // handle cases when k > n

    int temp[50];

    // Move last k elements to the beginning
    for(int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    // Move the remaining elements
    for(int i = k; i < n; i++)
        temp[i] = arr[i - k];

    // Print rotated array
    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
