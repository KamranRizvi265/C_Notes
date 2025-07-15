#include<stdio.h>

struct Student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter the roll number of the student: ");
    scanf("%d", &s1.roll_no);
    printf("Enter the name of the student: ");
    scanf(" %19s", s1.name);
    printf("Enter the marks of the student: ");
    scanf("%f", &s1.marks);

    printf("The details of the student are: \n");
    printf("Roll number: %d\nName: %s\nMarks: %.2f", s1.roll_no, s1.name, s1.marks);

    return 0;
}