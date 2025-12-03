/* Return a structure containing top student's details from a function.
*/

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return top student
struct Student findTopStudent(struct Student students[], int n) {
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    return students[topIndex];
}

int main() {
    int n = 5;
    struct Student students[5];
    
    // Read data for 5 students
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Get top student
    struct Student topStudent = findTopStudent(students, n);

    // Print top student details
    printf("Top Student Details:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}