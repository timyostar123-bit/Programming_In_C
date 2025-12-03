/* Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int role;

    // Ask user to choose a role
    printf("Select your role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &role);

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have guest access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}