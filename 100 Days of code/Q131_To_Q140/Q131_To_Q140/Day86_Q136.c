/* Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1, num2, result;

    // Display menu
    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on choice
    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}