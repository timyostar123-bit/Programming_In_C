/* Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

*/

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result;

    // Assign a value (you can change this to test)
    result = TIMEOUT;

    // Print message based on enum value
    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}