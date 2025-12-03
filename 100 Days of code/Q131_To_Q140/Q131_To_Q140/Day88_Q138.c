/* Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    // Array of strings corresponding to enum names
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    
    // Loop through enum values
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", roleNames[i - 1], i);
    }

    return 0;
}