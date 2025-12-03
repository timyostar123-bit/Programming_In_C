/* Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define a struct for Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    // Create a person
    struct Person p1;

    // Input person details
    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    
    printf("Select gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    int g;
    scanf("%d", &g);
    p1.gender = g;  // Assign enum value

    // Print person details
    printf("\nName: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: ");
    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}