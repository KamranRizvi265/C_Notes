#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks[5];
    float total_marks;
    float percentage;
};

// Declare prototypes
void student_details(struct Student *student);
void student_record(struct Student *student);

int main() {
    struct Student student;
    int choice;

    do {
        printf("Student Record System\n");
        printf("1. Enter Student Details\n");
        printf("2. Display Student Record\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                student_details(&student);
                break;

            case 2:
                student_record(&student);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

// Define the functions after main
void student_details(struct Student *student) {
    getchar(); // Clear the input buffer before reading string
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = 0; // Remove newline character

    printf("Enter roll number: ");
    scanf("%d", &student->roll_no);

    printf("Enter marks for 5 subjects:\n");
    student->total_marks = 0;
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student->marks[i]);
        student->total_marks += student->marks[i];
    }
    student->percentage = (student->total_marks / 500) * 100;
}

void student_record(struct Student *student) {
    printf("\nStudent Record:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->roll_no);
    printf("Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, student->marks[i]);
    }
    printf("Total Marks: %.2f\n", student->total_marks);
    printf("Percentage: %.2f%%\n", student->percentage);
}