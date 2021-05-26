#include <stdlib.h>
#include <stdio.h>

// accessing memory addresses

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    return 0;
}

// %p pointer to memory address in main memory

// age: 0061FF1C
// gpa: 0061FF10
// grade: 0061FF0F