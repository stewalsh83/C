#include <stdlib.h>
#include <stdio.h>

// use capital. Student data type (Basic template)
struct Student 
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1; // container for student1 to store name, major, age, gpa
    // assigning values to student1
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim"); // string copy needed for char in an array
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 30;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Art");

    printf("%s %d %s %f\n", student1.name, student1.age, student1.major, student1.gpa);
    printf("%s %d %s %f", student2.name, student2.age, student2.major, student2.gpa);

    return 0;
}

// data structure
// model real world entities