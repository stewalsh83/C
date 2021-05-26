#include <stdlib.h>
#include <stdio.h>

int main()
{
    // pointer variables
    int age = 30;
    int * pAge = &age;
    
    double gpa = 3.4;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age);

    return 0;
}

// pointer %p 
// points to a memory address of the age variable
