/* Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    // Print enum names and their integer values
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    // Store enum in an int variable
    int s = SUCCESS;
    printf("Stored in int variable: s = %d\n", s);

    return 0;
}