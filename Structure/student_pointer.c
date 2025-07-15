#include<stdio.h>
#include<string.h>

struct Student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct Student student;
    struct Student *ptr = &student; // Pointer to the structure"

    // Assigning values using pointer
    ptr->roll_no = 101; // Accessing members using pointer
    ptr->marks = 85.5;
    strcpy(ptr->name, "John Doe"); // Using strcpy to copy string

    /*Alternate
    (*ptr).roll_no = 101;  Accessing members using dereferencing
    (*ptr).marks = 85.5;
    strcpy((*ptr).name, "John Doe");  Using strcpy to copy string
    */

    //Normal printing
    printf("\nName : %s, Roll No : %d, Marks : %.2f", student.name, student.roll_no, student.marks);

    //Printing using dereferencing
    printf("\nName : %s, Roll No : %d, Marks : %.2f", (*ptr).name, (*ptr).roll_no, (*ptr).marks);

    //Printing using arrow operator pointer
    printf("\nName : %s, Roll No : %d, Marks : %.2f", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}